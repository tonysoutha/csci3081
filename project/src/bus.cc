// Copyright 2019 Tony Southa

#include "src/bus.h"

Bus::Bus(std::string name, Route * out,
Route * in, int capacity, double speed) {
  name_ = name;
  outgoing_route_ = out;
  incoming_route_ = in;
  passenger_max_capacity_ = capacity;
  speed_ = speed;
  distance_remaining_ = outgoing_route_->NextDistance();
  num_passengers_ = 0;
  UpdateBusData();
}

bool Bus::LoadPassenger(Passenger * new_passenger) {
  if (passenger_max_capacity_ > 0) {
    passenger_max_capacity_--;
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
  UpdateBusData();
  Move();
  for (std::list<Passenger *>::iterator it = passengers_.begin();
  it != passengers_.end(); it++) {  // Update passengers
    (*it)->Update();
  }

  Route * current_route;
  if (outgoing_route_->IsRouteComplete()) { // check which route to use
    current_route = incoming_route_;
  } else {
    current_route = outgoing_route_;
  }

  if (distance_remaining_ <= 0) {
    current_route->UpdateDestinationStopIndex();
    if (current_route->IsAtEnd()) {
      current_route->SetRouteComplete();
      while (passengers_.size() > 0) {
        passengers_.pop_front();  // Unload all passengers still on bus
      }
    } else {
      for (std::list<Passenger *>::iterator it = passengers_.begin();
        it != passengers_.end(); it++) {
        if ((*it)->GetDestination() ==
        (current_route->GetDestinationStop())->GetId()) {
        // Check if passengers need to be unloaded
          passengers_.erase(it);
        }
      }
      current_route->GetDestinationStop()->LoadPassengers(this);
      current_route->NextStop();
      distance_remaining_ = current_route->NextDistance();
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

// Stop * Bus::GetNextStop() {
//   if (outgoing_route_->IsRouteComplete()) {
//     return outgoing_route_->GetDestinationStop();
//   }
//   return incoming_route_->GetDestinationStop();
// }

size_t Bus::GetNumPassengers() {
  return num_passengers_;
}

int Bus::GetCapacity() {
  return passenger_max_capacity_;
}

// Position Bus::GetPosition() const {
//   Position pos = Position();
//   Route * cur_route;
// }
void Bus::UpdateBusData() {
  bus_data_.id = GetName();
  Stop * previous;
  Stop * next;
  // if (outgoing_route_->IsRouteComplete()) {
  //   if (outgoing_route_->GetDestinationStopIndex() == 0) {  // Set previous and next to the same stop if there is no previous
  //     previous = incoming_route_->GetDestinationStop();
  //     next = incoming_route_->GetDestinationStop();
  //   } else {
  //     previous = incoming_route_->GetPreviousStop();
  //     next = incoming_route_->GetDestinationStop();
  //   }
  // } else {
  //   if (incoming_route_->GetDestinationStopIndex() == 0) {  // Set previous and next to the same stop if there is no previous
  //     previous = outgoing_route_->GetDestinationStop();
  //     next = outgoing_route_->GetDestinationStop();
  //   } else {
  //     previous = outgoing_route_->GetPreviousStop();
  //     next = outgoing_route_->GetDestinationStop();
  //   }
  // }
  Route * cur_route;
  if (outgoing_route_->IsRouteComplete()) {
    cur_route = incoming_route_;
  } else {
    cur_route = outgoing_route_;
  }

  struct Position bus_position_;

  if (distance_remaining_ <= 0) {
    bus_position_.x = cur_route->GetDestinationStop()->GetLongitude();
    bus_position_.y = cur_route->GetDestinationStop()->GetLatitude();
  } else {
    Stop * prev = cur_route->GetPreviousStop();
    Stop * next = cur_route->GetDestinationStop();

    bus_position_.x = (prev->GetLongitude()+next->GetLongitude())/2;
    bus_position_.y = (prev->GetLatitude()+next->GetLatitude())/2;
  }
  // bus_position_.y = ((previous->GetLatitude() + next->GetLatitude()) / 2);
  // bus_position_.x = ((previous->GetLongitude() + next->GetLongitude()) / 2);
  bus_data_.position = bus_position_;
  bus_data_.num_passengers = GetNumPassengers();
  bus_data_.capacity = GetCapacity();
}

struct BusData Bus::GetBusData() {
  return bus_data_;
}

bool Bus::IsTripComplete() {
  if (outgoing_route_->IsRouteComplete()) {
    return true;
  }
  return false;
}
