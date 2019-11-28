// Copyright 2019 Tony Southa

#ifndef SRC_CONFIGURATION_SIMULATOR_H_
#define SRC_CONFIGURATION_SIMULATOR_H_

#include <vector>
#include <list>

#include "src/config_manager.h"

class Route;
class Bus;
class Stop;

class ConfigurationSimulator {
 public:
  ConfigurationSimulator();
  ~ConfigurationSimulator();
  /**
   * @brief Start instantiates the routes stops and passengers
	 * for the config_sim.
	 *
	 * @param[in] A vector of bus start timings
	 * @param[in] Number of time steps to run the simulation
   */
  void Start(const std::vector<int>&, const int&);
  void Update();
  void SetConfigManager(ConfigManager * cm);

 private:
  ConfigManager* configManager_;
  std::vector<int> busStartTimings_;
  std::vector<int> timeSinceLastBus_;
  int numTimeSteps_;
  int simulationTimeElapsed_;
  std::vector<Route *> prototypeRoutes_;
  std::vector<Bus *> busses_;
  int busId = 1000;
};
#endif  // SRC_CONFIGURATION_SIMULATOR_H_
