// Copyright 2019 Tony Southa

#include <iostream>
#include <vector>

#include "src/stop.h"

Stop::Stop(int id, double longitude, double latitude) :
id_(id), longitude_(longitude), latitude_(latitude) {
  // Defaults to Westbound Coffman Union stop
  // no initialization of list of passengers necessary
  passengers_present_ = 0;
}

int Stop::AddPassengers(Passenger * pass) {
  // Add pass to the passenger list for stop
  passengers_.push_back(pass);
  passengers_present_++;
  return 0;
}

void Stop::Update() {
  // Calls update on all passengers at the stop
  for (std::list<Passenger *>::iterator it = passengers_.begin();
  it != passengers_.end(); it++) {
    (*it)->Update();
  }
}

int Stop::GetId() const {
  return id_;
}

void Stop::Report(std::ostream & out) const {
  out << "ID: " << id_ << std::endl;
  out << "Passengers waiting: " << passengers_.size() << std::endl;
  for (std::list<Passenger *>::const_iterator it = passengers_.begin();
  it != passengers_.end(); it++) {
    (*it)->Report(out);
  }
}

bool Stop::LoadPassengers(Bus * bus) {
  // Load passengers until passengers_ is empty or bus is at max capacity
  while (!(passengers_.empty())) {
    if (bus->LoadPassenger(passengers_.front())) {
      passengers_present_--;
      passengers_.pop_front();
    } else {
      return false;
    }
  }
  return true;
}

double Stop::GetLatitude() {
  return latitude_;
}

double Stop::GetLongitude() {
  return longitude_;
}

int Stop::GetPassengersPresent() {
  return passengers_present_;
}

std::list<Passenger *> Stop::GetPassengerList() {
  return passengers_;
}
