/**
 * @file passenger.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#ifndef PROJECT_SRC_PASSENGER_H_
#define PROJECT_SRC_PASSENGER_H_

#include <iostream>
#include <string>

/**
* @brief Class that creates passengers who will ride the bus
*/
class Passenger {  // : public Reporter {
 public:
  /**
  * @brief Constructs a passenger with a standard name and id.
  *
  *
  * @param[in] int holding an id number
  * @param[in] string holding a name of a created passenger.
  *
  */
  explicit Passenger(int = -1, std::string = "Nobody");
  /**
  * @brief Updates passenger times after one time step
  */
  void Update();
  /**
   * @brief Puts passenger on bus, setting its time on bus to 1
   */
  void GetOnBus();
  /**
   * @brief Return the total waiting time on bus and at stop
   */
  int GetTotalWait() const;
  /**
   * @brief Determine if passenger is on a bus
   *
   * @return true if passenger is on a bus false otherwise
   */
  bool IsOnBus() const;
  /**
   * @brief Get the destination of a passenger
   * @return the id # of the destination stop
   */
  int GetDestination() const;
  void Report(std::ostream&) const;
 private:
  std::string name_;
  int destination_stop_id_;
  int wait_at_stop_;
  int time_on_bus_;
  int id_;
  static int count_;   // global count, used to set ID for new instances
};
#endif  // PROJECT_SRC_PASSENGER_H_
