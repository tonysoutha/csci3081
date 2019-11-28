/**
 * @file stop.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#ifndef SRC_STOP_H_
#define SRC_STOP_H_

#include <list>
#include <iostream>

#include "src/bus.h"
#include "src/passenger.h"

class Bus;

/**
* @brief Class that creates stops which hold passengers until they get on a bus
*/
class Stop {
 public:
  /**
  * @brief Constructs a stop with at a specific location
  *
  * @param[in] int holding the stop id number
  * @param[in] double holding latitude of the stop
  * @param[in] double holding longitude of the stop
  */
  explicit Stop(int, double = 44.973723, double = -93.235365);
  // Adding passengers to the stop (from the generator)
  int GetId() const;
  /**
   * @brief Add passengers that arrive to the stop
   */
  int AddPassengers(Passenger *);
  /**
   * @brief Updates the passengers at the stop
   */
  void Update();
  void Report(std::ostream&) const;
  /**
   * @brief Load passengers from the stop onto the bus
   */
  bool LoadPassengers(Bus * bus);
  double GetLongitude();
  double GetLatitude();
  int GetPassengersPresent();
  std::list<Passenger *> GetPassengerList();

 private:
  int id_;
  std::list<Passenger *> passengers_;  // considered array, vector, queue, list
  double longitude_;
  double latitude_;  // are we using long/lat coords?
  // derived information - not needed depending on passengers_
  // data structure implementation?
  int passengers_present_;
};
#endif  // SRC_STOP_H_
