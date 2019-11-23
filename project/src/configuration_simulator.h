/**
 * @file configuration_simulator.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#ifndef SRC_CONFIGURATION_SIMULATOR_H_
#define SRC_CONFIGURATION_SIMULATOR_H_

#include <vector>

#include "src/simulator.h"
#include "src/config_manager.h"

class ConfigurationSimulator : public Simulator {
  public:
   ConfigurationSimulator(ConfigManager * cm);
   bool Start() override;
   bool Update() override;
   void SetOutput(std::ostream * f);
  private:
   std::vector<int> bus_counters_;
   std::vector<int> bus_start_timings_;
   std::vector<int> time_since_last_bus_generation_;
   int simulation_time_elapsed_;
   std::ostream * f_ptr;
   ConfigManager * configManager_;

   int numTimeSteps_;

   int busId = 1000;
};

#endif  // SRC_CONFIGURATION_SIMULATOR_H_
