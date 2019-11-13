/**
 * @file bus.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#ifndef PROJECT_SRC_BUS_H_
#define PROJECT_SRC_BUS_H_

#include <iostream>
#include <list>
#include <string>

#include "src/passenger.h"
#include "src/route.h"
#include "src/stop.h"

class PassengerUnloader;
class PassengerLoader;
class Route;
class Stop;

/**
 * @brief Bus class that follows a route and picks up and unloads passengers
 */
class Bus {
 public:
  /**
   * @brief Creation of a new bus
   *
   * @param[in] name of bus
   * @param[in] outbound route
   * @param[in] inbound route
   * @param[in] max capacity of passengers
   * @param[in] speed of bus (distance it will travel in one time step)
   *
   * @return Bus object that travels on the outbound and inbound route
   */
  Bus(std::string name, Route * out, Route * in, int capacity = 60, double speed = 1);
   /**
   * @brief Loads a passenger onto the bus
   *
   * @param[in] a passenger object
   *
   * @return returns a bool based on whether the load was successful (bus was not at max capacity)
   */
  bool LoadPassenger(Passenger *);  // returning revenue delta
  /**
   * @brief Moves the bus, updating the distance based on the speed of the bus
   *
   * @return returns a bool based on whether the move was successful
   */
  bool Move();
  /**
   * @brief Updates the passengers on the bus and performs the loading and unloading of passengers
   */
  void Update();
  /**
   * @brief Prints information on the bus at the current time step.
   *
   * @param[in] ostream where the information will be outputted
   */
  void Report(std::ostream&);

 private:
  std::list<Passenger *> passengers_; // passengers on the bus
  int passenger_max_capacity_;
  std::string name_;
  double speed_;  // could also be called "distance travelled in one time step"
  Route * outgoing_route_;
  Route * incoming_route_;
  double distance_remaining_;  // when negative?, unload/load procedure occurs
                              // AND next stop set
  // double revenue_; // revenue collected from passengers, doesn't include
                      // passengers who pay on deboard
  // double fuel_;   // may not be necessary for our simulation
  // double max_fuel_;
};
#endif  // PROJECT_SRC_BUS_H_
