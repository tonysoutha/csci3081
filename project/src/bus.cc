// Copyright 2019 Tony Southa

#include "src/bus.h"

Bus::Bus(std::string name, Route * out,
Route * in, int capacity, double speed) {
  name_ = name;
  outgoing_route_ = out;
  incoming_route_ = in;
  passenger_max_capacity_ = capacity;
  speed_ = speed;
  distance_remaining_ = 0;
}


bool Bus::LoadPassenger(Passenger * new_passenger) {
  if (passenger_max_capacity_ > 0) {
    passenger_max_capacity_--;
    passengers_.push_back(new_passenger);
    new_passenger->GetOnBus();
    return true;
  } else {
    return false;
  }
}

bool Bus::Move() {
  distance_remaining_ = distance_remaining_ - speed_;
  // decrement the distance_remaining_ after one time step
  return true;
}

// bool Refuel() {
//  // This may become more complex in the future
//  fuel_ = max_fuel_;
// }

void Bus::Update() {  // using common Update format
  for (std::list<Passenger *>::iterator it = passengers_.begin();
  it != passengers_.end(); it++) {  // Update passengers
    (*it)->Update();
  }
  if ((outgoing_route_->IsRouteComplete()) == false) {
  // Check whether to use outgoing or incoming route
    if (distance_remaining_ < 0) {  // Check if at stop
      if ((outgoing_route_->IsAtEnd()) == true) {  // We are at the last stop
        outgoing_route_->SetRouteComplete();
        // Complete outgoing route so we can begin incoming route next update
        while (passengers_.size() > 0) {
          passengers_.pop_front();  // Unload all passengers still on bus
        }
      } else {
        for (std::list<Passenger *>::iterator it = passengers_.begin();
          it != passengers_.end(); it++) {
          if ((*it)->GetDestination() ==
          (outgoing_route_->GetDestinationStop())->GetId()) {
          // Check if passengers need to be unloaded
            passengers_.erase(it);
          }
        }
      (outgoing_route_->GetDestinationStop())->LoadPassengers(this);
      // Load passengers from stop onto bus
      outgoing_route_->NextStop();
      // Set next destination stop
      distance_remaining_ = outgoing_route_->NextDistance();
      // Set next distance in between the next stops
      }
    }
  } else {  // Use incoming route instead
    if (distance_remaining_ < 0) {
      if ((incoming_route_->IsAtEnd()) == true) {
        incoming_route_->SetRouteComplete();
        while (passengers_.size() > 0) {
          passengers_.pop_front();
        }
      } else {
        for (std::list<Passenger *>::iterator it = passengers_.begin();
        it != passengers_.end(); it++) {
          if ((*it)->GetDestination() ==
          (outgoing_route_->GetDestinationStop())->GetId()) {
            passengers_.erase(it);
          }
        }
        (incoming_route_->GetDestinationStop())->LoadPassengers(this);
        incoming_route_->NextStop();
        distance_remaining_ = incoming_route_->NextDistance();
      }
    }
  }
  Move();
}

void Bus::Report(std::ostream & out) {
  out << "Name: " << name_ << std::endl;
  out << "Speed: " << speed_ << std::endl;
  out << "Distance to next stop: " << distance_remaining_ << std::endl;
  out << "\tPassengers (" << passengers_.size() << "): " << std::endl;
  for (std::list<Passenger *>::iterator it = passengers_.begin();
  it != passengers_.end(); it++) {
    (*it)->Report(out);
  }
}
