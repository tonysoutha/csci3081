/**
 * @file local_simulator.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
 #include "local_simulator.h"

#include <vector>
#include <list>

#include "bus.h"
#include "stop.h"
#include "route.h"
#include "random_passenger_generator.h"

bool LocalSimulator::Start() {

  simulation_time_elapsed_ = 0; //init, but also allows restart

  pass_ = new Passenger(1, "Kaywinnit");

  return true;
}

bool LocalSimulator::Update() {
  //increase time
  simulation_time_elapsed_++;
  std::cout << "~~~~~~~~~~~~~ The time is now " << simulation_time_elapsed_;
  std::cout << " ~~~~~~~~~~~~~" << std::endl;
<<<<<<< HEAD
  
  pass_->Update();
  pass_->Report();
  
=======

  pass_->Update();
  pass_->Report();

>>>>>>> 7baac5da796f5e9687456efc69014d59ec6818d5
  return true;
}
