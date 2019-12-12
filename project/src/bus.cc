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
  num_passengers_ = 0;
}

bool Bus::LoadPassenger(Passenger * new_passenger) {
  if (num_passengers_ < passenger_max_capacity_) {
    // Add passenger to passenger list and load them onto bus
    passengers_.push_back(new_passenger);
    new_passenger->GetOnBus();
    num_passengers_++;
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
  Move();
  UpdateBusData();
  for (std::list<Passenger *>::iterator it = passengers_.begin();
  it != passengers_.end(); it++) {  // Update passengers
    (*it)->Update();
  }
  if (!(outgoing_route_->IsRouteComplete())) {
  // Check whether to use outgoing or incoming route
    if (distance_remaining_ <= 0) {  // Check if at stop
      if ((outgoing_route_->IsAtEnd()) == true) {  // We are at the last stop
        outgoing_route_->SetRouteComplete();
        // Complete outgoing route so we can begin incoming route next update
        while (passengers_.size() > 0) {
          passengers_.pop_front();  // Unload all passengers still on bus
        }
        num_passengers_ = 0;
        // Load passengers on the incoming route
        // and update next stop and distance
        incoming_route_->GetDestinationStop()->LoadPassengers(this);
        incoming_route_->NextStop();
        distance_remaining_ = incoming_route_->GetNextStopDistance();
      } else {
        for (std::list<Passenger *>::iterator it = passengers_.begin();
        it != passengers_.end(); it++) {
          if ((*it)->GetDestination() ==
          (outgoing_route_->GetDestinationStop())->GetId()) {
          // Check if passengers need to be unloaded
            passengers_.erase(it);
            it--;
          }
        }
        (outgoing_route_->GetDestinationStop())->LoadPassengers(this);
        // Load passengers from stop onto bus
        outgoing_route_->NextStop();
        // Set next destination stop
        distance_remaining_ = outgoing_route_->GetNextStopDistance();
        // Set next distance in between the next stops
      }
    }
  } else {  // Use incoming route instead
    if (distance_remaining_ <= 0) {
      if (incoming_route_->IsAtEnd()) {
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
            it--;
          }
        }
        (incoming_route_->GetDestinationStop())->LoadPassengers(this);
        incoming_route_->NextStop();
        distance_remaining_ = incoming_route_->GetNextStopDistance();
      }
    }
  }
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

std::string Bus::GetName() const {
  return name_;
}

size_t Bus::GetNumPassengers() {
  return num_passengers_;
}

int Bus::GetCapacity() {
  return passenger_max_capacity_;
}

Route * Bus::GetOutgoing() {
  return outgoing_route_;
}

Route * Bus::GetIncoming() {
  return incoming_route_;
}

std::list<Passenger *> Bus::GetPassengers() {
  return passengers_;
}

int Bus::GetDistanceRemaining() {
  return distance_remaining_;
}

double Bus::GetSpeed() {
  return speed_;
}

void Bus::UpdateBusData() {
  bus_data_.id = GetName();
  Route * cur_route;
  if (outgoing_route_->IsRouteComplete()) {  // Determine which route to use
    cur_route = incoming_route_;
  } else {
    cur_route = outgoing_route_;
  }

  struct Position bus_position_;

  if (distance_remaining_ <= 0) {  // Set the bus location to be the stop
    bus_position_.x = cur_route->GetDestinationStop()->GetLongitude();
    bus_position_.y = cur_route->GetDestinationStop()->GetLatitude();
  } else {  // Set the bus location to be the avg of prev_stop and next_stop
    Stop * prev_stop = cur_route->GetPreviousStop();
    Stop * next_stop = cur_route->GetDestinationStop();

    bus_position_.x = (prev_stop->GetLongitude()+next_stop->GetLongitude())/2;
    bus_position_.y = (prev_stop->GetLatitude()+next_stop->GetLatitude())/2;
  }
  bus_data_.position = bus_position_;
  bus_data_.num_passengers = GetNumPassengers();
  bus_data_.capacity = GetCapacity();
}

BusData Bus::GetBusData() {
  return bus_data_;
}

bool Bus::IsTripComplete() {
  if (outgoing_route_->IsRouteComplete() &&
  incoming_route_->IsRouteComplete()) {
    return true;
  }
  return false;
}
