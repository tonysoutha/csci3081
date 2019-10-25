// Copyright 2019 Tony Southa

#ifndef SRC_PASSENGER_H_
#define SRC_PASSENGER_H_

#include <iostream>
#include <string>

/**
 * @brief The class for Passengers.
 */
<<<<<<< HEAD
class Passenger {  // : public Reporter {
=======
class Passenger { // : public Reporter {
>>>>>>> support-code
 public:
/**
 * @param[in] first parameter takes in an int for the time for the passenger
   @param[in] second parameter takes in a string of the passenger's name
 */
<<<<<<< HEAD
  explicit Passenger(int = -1, std::string = "Nobody");
=======

  Passenger(int = -1, std::string = "Nobody");
>>>>>>> support-code
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
<<<<<<< HEAD
};
#endif  // SRC_PASSENGER_H_
=======

};
#endif
>>>>>>> support-code
