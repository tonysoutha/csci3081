/**
 * @file route.h
 *
 * @Copyright 2019 3081 Staff, All rights reserved.
 */

#ifndef SRC_ROUTE_H_
#define SRC_ROUTE_H_

#include <list>
#include <iostream>
#include <string>

#include "./passenger_generator.h"
#include "./stop.h"

class PassengerGenerator;
class Stop;

class Route {
 public:
  Route(std::string name, Stop ** stops, double * distances, int num_stops,
        PassengerGenerator *);
  Route * Clone();
  void Update();
  void Report(std::ostream&);
  bool IsAtEnd() const;
  void NextStop();  // Change destination_stop_ to next stop
  Stop * GetDestinationStop() const;    // Get pointer to next stop
  double NextDistance();
  bool IsRouteComplete();
  void SetRouteComplete();
  //double GetTotalRouteDistance() const;
  //double GetNextStopDistance() const;
 private:
  int GenerateNewPassengers();       // generates passengers on its route
  PassengerGenerator * generator_;
  std::list<Stop *> stops_;
  std::list<double> distances_between_;  // length = num_stops_ - 1
  std::string name_;
  int num_stops_;
  int stops_visited_;
  int destination_stop_index_;  // always starts at zero, no init needed
  Stop * destination_stop_;
  bool route_complete;
  // double trip_time_; // derived data - total distance travelled on route
};
#endif  // SRC_ROUTE_H_
