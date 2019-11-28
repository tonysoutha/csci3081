// Copyright 2019 Tony Southa

#include "src/route.h"

Route::Route(std::string name, Stop ** stops,
double * distances, int num_stops, PassengerGenerator * passgen) {
  for (int i = 0; i < num_stops; i++) {
    stops_.push_back(stops[i]);
  }
  for (int i = 0; i < num_stops - 1; i++) {
    distances_between_.push_back(distances[i]);
  }

  name_ = name;
  num_stops_ = num_stops;
  generator_ = passgen;
  destination_stop_ = stops_.front();
  prev = NULL;
  route_complete = false;
  destination_stop_index_ = 0;

  // UpdateRouteData();
}

void Route::Update() {
  // calls update on all stops and generates passengers at them
  generator_->GeneratePassengers();
  for (std::list<Stop *>::iterator it = stops_.begin();
  it != stops_.end(); it++) {
    (*it)->Update();
  }
  UpdateRouteData();
}

void Route::Report(std::ostream & out) {
  out << "Name: " << name_ << std::endl;
  out << "Num stops: " << num_stops_ << std::endl;
  int stop_counter = 0;
  for (std::list<Stop *>::const_iterator it = stops_.begin();
  it != stops_.end(); it++) {
    (*it)->Report(out);
    stop_counter++;
  }
}

Route * Route::Clone() {
  Stop ** stops = new Stop *[num_stops_];  // Create a new array for stops
  int i = 0;
  for (std::list<Stop *>::iterator it = stops_.begin();
  it != stops_.end(); it++) {
    stops[i++] = *it;
    // Place the stops in the list back into an array
  }
  double * dist = new double[distances_between_.size()];
  // Create a new array for distances
  int j = 0;
  for (std::list<double>::iterator it = distances_between_.begin();
  it != distances_between_.end(); it++) {
    dist[j++] = *it;  // Place the distances in the list back into an array
  }
  Route * newRoute = new Route (name_, stops, dist, num_stops_, generator_);
  // Create a new cloned route
  delete[] stops;
  delete[] dist;
  return newRoute;
}

std::list<double> Route::GetDistances() {
  return distances_between_;
}

int Route::GetNumStops() {
  return num_stops_;
}

Stop * Route::GetDestinationStop() const {
  return destination_stop_;
}

bool Route::IsAtEnd() const {
  if (destination_stop_index_ == (num_stops_)) {
    return true;
  }
  return false;
}


void Route::NextStop() {
  destination_stop_index_++;;
  for (std::list<Stop *>::const_iterator it = stops_.begin();
  it != stops_.end(); it++) {
    if ((*it) == destination_stop_) {
    // Search for current stop in list
      prev = *(it);
      destination_stop_ = *(it++);
      // Set the destination stop to the next stop in the list
    }
  }

  // destination_stop_index_++;
  // std::list<Stop *>::iterator it = stops_.begin();
  // while ((*it) != destination_stop_) {
  //   it++;
  // }
  // prev = *(it);
  // it++;
  // destination_stop_ = *(it);
}

double Route::NextDistance() {
  // looks in the distances_between_ list to find
  // the next distance in between stops
  std::list<double>::iterator it = distances_between_.begin();
  std::advance(it, destination_stop_index_-1);
  return *it;
}

bool Route::IsRouteComplete() {
  return route_complete;
}

void Route::SetRouteComplete() {
  route_complete = true;
}

Stop * Route::GetPreviousStop() {
  return prev;
}

std::string Route::GetName() {
  return name_;
}

std::list<Stop *> Route::GetStops() {
  return stops_;
}

int Route::GetDestinationStopIndex() {
  return destination_stop_index_;
}

void Route::UpdateRouteData() {
  route_data_.id = GetName();
  std::vector<StopData> stop_data_vector_;
  for (std::list<Stop *>::const_iterator it = stops_.begin();
  it != stops_.end(); it++) {
    struct StopData temp_stop_;
    // Create a StopData struct to store in route_data_
    temp_stop_.id = std::to_string(((*it)->GetId()));
    struct Position stop_pos_;
    // Create Position struct to store in temp_stop_
    stop_pos_.y = (*it)->GetLatitude();
    stop_pos_.x = (*it)->GetLongitude();
    temp_stop_.position = stop_pos_;
    temp_stop_.num_people = (*it)->GetPassengersPresent();
    stop_data_vector_.push_back(temp_stop_);
  }
  route_data_.stops = stop_data_vector_;
}

RouteData Route::GetRouteData() {
  return route_data_;
}
