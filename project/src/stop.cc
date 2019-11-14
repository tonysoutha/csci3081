// Copyright 2019 Tony Southa

#include <iostream>
#include <vector>

#include "stop.h"

Stop::Stop(int id, double longitude, double latitude) : id_(id), longitude_(longitude), latitude_(latitude) {
  //Defaults to Westbound Coffman Union stop
  // no initialization of list of passengers necessary
  passengers_present_ = 0;
}

int Stop::AddPassengers(Passenger * pass) {  // Add pass to the passenger list for stop
  passengers_.push_back(pass);
  passengers_present_++;
  return 0;
}

void Stop::Update() {  // Calls update on all passengers at the stop
  for (std::list<Passenger *>::iterator it = passengers_.begin(); it != passengers_.end(); it++) {
    (*it)->Update();
  }
}

int Stop::GetId() const{
  return id_;
}

void Stop::Report(std::ostream & out) const {
  out << "ID: " << id_ << std::endl;
  out << "Passengers waiting: " << passengers_.size() << std::endl;
  for(std::list<Passenger *>::const_iterator it = passengers_.begin(); it != passengers_.end(); it++) {
    (*it)->Report(out);
  }
}

bool Stop::LoadPassengers(Bus * bus) {
// Calls the bus LoadPassenger method to load passengers from stop onto bus
  for (std::list<Passenger *>::iterator it = passengers_.begin(); it != passengers_.end(); it++) {
    bus->LoadPassenger(*it);
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
