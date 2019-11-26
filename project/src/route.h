/**
 * @file route.h
 *
 * @Copyright 2019 3081 Staff, All rights reserved.
 */

#ifndef PROJECT_SRC_ROUTE_H_
#define PROJECT_SRC_ROUTE_H_

#include <list>
#include <iostream>
#include <string>

#include "./passenger_generator.h"
#include "./stop.h"
#include "./data_structs.h"

class PassengerGenerator;
class Stop;

/**
* @brief Class that creates routes which are a collection of stops
* and generates passengers at those stops
**/
class Route {
 public:
  /**
  * @brief Create a route composed of a series of stops and distances
  *
  * @param[in] Name of route
  * @param[in] Array of pointers to stops
  * @param[in] Array of distances
  * @param[in] Number of stops in route
  * @param[in] Passenger Generator used to generate passengers on the route
  *
  * @return route with name, array of stops and distances, number of stops, and a
  * passenger generator
  */
  Route(std::string name, Stop ** stops, double * distances, int num_stops,
        PassengerGenerator *);
  /**
   * @brief Creates a clone of the current route
   *
   * @return New route
   */
  Route * Clone();
  void Update();
  void Report(std::ostream&);
  /**
   * @brief Tells us if the current route is at the last stop
   *
   * @return true if at last stop, false otherwise
   */
  bool IsAtEnd() const;
  void NextStop();  // Change destination_stop_ to next stop
  Stop * GetDestinationStop() const;    // Get pointer to next stop
  /**
   * @brief Look the distance array and return to next distance
   *
   * @return Distance between current and next stop
   */
  double NextDistance();
  /**
   * @brief Tell us if the current route has been completed
   *
   * @return True if route is complete, false otherwise
   */
  bool IsRouteComplete();
  /**
   * @brief Sets the route to complete
   */
  void SetRouteComplete();
  //double GetTotalRouteDistance() const;
  //double GetNextStopDistance() const;
  Stop * GetPreviousStop();
  std::string GetName();
  std::list<Stop *> GetStops();
  void UpdateRouteData();
  RouteData GetRouteData();
  int GetDestinationStopIndex();
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
  struct RouteData route_data_;
  Stop * prev;
  // double trip_time_; // derived data - total distance travelled on route
};
#endif  // PROJECT_SRC_ROUTE_H_
