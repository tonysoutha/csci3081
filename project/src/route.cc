#include "route.h"

Route::Route(std::string name, Stop ** stops, double * distances, int num_stops, PassengerGenerator *) {
  for (int i = 0; i < num_stops; i++) {
    stops_.push_back(stops[i]);
  }
  for (int i = 0; i < num_stops - 1; i++) {
    distances_between_.push_back(distances[i]);
  }

  name_ = name;
  num_stops_ = num_stops;
}

void Route::Update() {
  for( std::list<Stop *>::iterator it = stops_.begin(); it != stops_.end(); it++) {
    (*it)->Update();
  }
}

void Route::Report(std::ostream & out) {
  out << "Name: " << name_ << std::endl;
  out << "Num stops: " << num_stops_ << std::endl;
  int stop_counter = 0;
  for(std::list<Stop *>::const_iterator it = stops_.begin(); it != stops_.end(); it++) {
    (*it)->Report(out);
    stop_counter++;
  }
}

Route * Route::Clone() {
  Stop * stops [num_stops_];
  int i = 0;
  for (std::list<Stop *>::iterator it = stops_.begin(); it != stops_.end(); it++) { 
    stops[i++] = *it;
  }
  double dist [num_stops_ - 1];
  for (std::list<double>::iterator it = distances_between_.begin(); it != distances_between_.end(); it++) {
    dist[i++] = *it;
  }
  Route * newRoute = new Route (name_, stops, dist, num_stops_, generator_);
  return newRoute;
}
