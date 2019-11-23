/**
 * @file new_local_simulator.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#include "src/configuration_simulator.h"

#include <vector>
#include <list>
#include <fstream>

#include "src/bus.h"
#include "src/stop.h"
#include "src/route.h"
#include "src/random_passenger_generator.h"

ConfigurationSimulator::ConfigurationSimulator(ConfigManager * config_manager) {
  configManager_ = config_manager;
}

void ConfigurationSimulator::SetOutput(std::ostream * f) {
   f_ptr = f;
}

bool ConfigurationSimulator::Start() {
  prototype_routes_ = configManager_->GetRoutes();
  return true;
}

// void ConfigurationSimulator::Start(const std::vector<int>& busStartTimings, const int& numTimeSteps) {
//     busStartTimings_ = busStartTimings;
//     numTimeSteps_ = numTimeSteps;
//
//     time_since_last_bus_generation_.resize(busStartTimings_.size());
//     for (int i = 0; i < static_cast<int>(time_since_last_bus_generation_.size()); i++) {
//         time_since_last_bus_generation_[i] = 0;
//     }
//
//     simulationTimeElapsed_ = 0;
//
//     prototype_routes_ = configManager_->GetRoutes();
//     for (int i = 0; i < static_cast<int>(prototypeRoutes_.size()); i++) {
//         prototype_routes_[i]->Report(std::cout);
//
//         prototype_routes_[i]->UpdateRouteData();
//     }
//
// }

// bool ConfigurationSimulator::Update() {
//   // increase time
//   simulation_time_elapsed_++;
//   std::cout << "~~~~~~~~~~~~~ The time is now " << simulation_time_elapsed_;
//   std::cout << " ~~~~~~~~~~~~~" << std::endl;
//
//   // various route-indexed list iterators
//   std::vector<int>::iterator bus_gen_timing_iter = bus_start_timings_.begin();
//   std::vector<int>::iterator bus_counter_iter = bus_counters_.begin();
//   std::vector<Route *>::iterator prototype_route_iter =
//                                                      prototype_routes_.begin();
//
//   // increase each time since last bus
//   // various iterators parallel the time_since_last iterator
//   for (std::vector<int>::iterator it = time_since_last_bus_generation_.begin();
//       it != time_since_last_bus_generation_.end();
//       it++, bus_gen_timing_iter++, bus_counter_iter++) {
//     (*it)++;
//
//     // if time since last [index] == bus gen timing[index]
//     if (0 >= (*bus_gen_timing_iter)) {
//       // create a new bus! routes are:
//       // prototype_routes_[index * 2] & prototype_routes_[index * 2 + 1]
//       Route * outbound = (*prototype_route_iter);
//       prototype_route_iter++;
//       Route * inbound = (*prototype_route_iter);
//       prototype_route_iter++;
//
//       active_buses_.push_back(new Bus(std::to_string((*bus_counter_iter)),
//                                   outbound->Clone(), inbound->Clone(), 60, 1));
//       (*bus_counter_iter)++;
//       (*bus_gen_timing_iter) = 10;
//     } else {
//       prototype_route_iter++;
//       prototype_route_iter++;
//       (*bus_gen_timing_iter)--;
//     }
//   }
//
//   // for each bus
//   for (std::list<Bus *>::iterator bus_iter = active_buses_.begin();
//       bus_iter != active_buses_.end(); bus_iter++) {
//     // update bus
//     (*bus_iter)->Update();
//     // bus report
//     (*bus_iter)->Report(std::cout);
//
//     // REQUIRES USE OF IsTripComplete, which was not required
//     // Buses which are "done" will just keep having Update() called
//     //   Students MAY need to deal with this, not sure yet...
//     // remove bus if trip is complete
//     // if ((*bus_iter)->IsTripComplete()) {
//     //   bus_iter = active_buses_.erase(bus_iter);
//     //   bus_iter--;
//     // }
//   }
//
//   // for each stop
//   for (std::vector<Route *>::iterator route_iter = prototype_routes_.begin();
//       route_iter != prototype_routes_.end(); route_iter++) {
//     // update stop
//     (*route_iter)->Update();
//     (*route_iter)->Report(std::cout);
//   }
//
//   return true;
// }


bool ConfigurationSimulator::Update() {
  simulation_time_elapsed_++;

  std::cout << "~~~~~~~~~~ The time is now " << simulation_time_elapsed_;
  std::cout << "~~~~~~~~~~" << std::endl;

  std::cout << "~~~~~~~~~~ Generating new busses if needed ";
  std::cout << "~~~~~~~~~~" << std::endl;

  // Check if we need to generate new busses
  for (int i = 0; i < static_cast<int>(time_since_last_bus_generation_.size()); i++) {
      // Check if we need to make a new bus
      if (0 >= time_since_last_bus_generation_[i]) {

          Route * outbound = prototype_routes_[2 * i];
          Route * inbound = prototype_routes_[2 * i + 1];

          active_buses_.push_back(new Bus(std::to_string(busId), outbound->Clone(), inbound->Clone(), 60, 1));
          busId++;

          time_since_last_bus_generation_[i] = bus_start_timings_[i];
      } else {
          time_since_last_bus_generation_[i]--;
      }
  }

  std::cout << "~~~~~~~~~ Updating routes ";
  std::cout << "~~~~~~~~~" << std::endl;
  // Update routes
  for (int i = 0; i < static_cast<int>(prototype_routes_.size()); i++) {
      prototype_routes_[i]->Update();

      prototype_routes_[i]->Report(std::cout);
  }


  std::cout << "~~~~~~~~~ Updating busses ";
  std::cout << "~~~~~~~~~" << std::endl;

  // Update busses
  // for (int i = static_cast<int>(active_buses_.size()) - 1; i >= 0; i--) {
  //     active_buses_[i]->Update();
  //
  //     if (active_buses_[i]->IsTripComplete()) {
  //         active_buses_.erase(busses_.begin() + i);
  //         continue;
  //     }
  //
  //     active_buses_[i]->Report(std::cout);
  // }

  for (std::list<Bus *>::iterator bus_iter = active_buses_.begin();
      bus_iter != active_buses_.end(); bus_iter++) {
    // update bus
    (*bus_iter)->Update();
    // bus report
    (*bus_iter)->Report(std::cout);
  }
  return true;
}
