#ifndef PASSENGER_H
#define PASSENGER_H

#include <iostream>
#include <string>

/**
 * @brief The class for Passengers.
 */
class Passenger { // : public Reporter {
 public:
/**
 * @param[in] first parameter takes in an int for the time for the passenger
   @param[in] second parameter takes in a string of the passenger's name
 */

  Passenger(int = -1, std::string = "Nobody");
  void Update();
  void GetOnBus();
  int GetTotalWait() const;
  bool IsOnBus() const;
  /**
   * The function GetDestination will return the int destination_stop_id
   */
  int GetDestination() const;
  void Report() const;
 private:
  std::string name_;
  int destination_stop_id_;
  int wait_at_stop_;
  int time_on_bus_;
  int id_;
  static int count_;  // global count, used to set ID for new instances

};
#endif
