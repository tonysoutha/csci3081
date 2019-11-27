/**
 * @file configuration_sim.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#include <iostream>

#include "src/config_manager.h"
#include "src/configuration_simulator.h"

int main(int argc, char**argv) {
  // NOTE: this usage will change depending on
  //       how you build your config_sim classes
  //   E.g., how will you handle getting the length of simulation value?

  std::cout << "Usage: ./build/bin/configuration_sim <config_filename>";
  std::cout << std::endl;

  // Check command line params for config file name
  // if (argc == 0) {
    // use default
  // }
  ConfigManager * cm = new ConfigManager;
  std::string file = argv[1];
  cm->ReadConfig(file);
  ConfigurationSimulator * cs = new ConfigurationSimulator;
  std::vector<int> busStartTimings;
  for (int i = 0; i < cm->GetRoutes().size()-1; i++) {
    busStartTimings.push_back(0.5);
  }
  int numTimeSteps = 25;
  cs->SetConfigManager(cm);
  cs->Start(busStartTimings, numTimeSteps);
  for (int i = 0; i < numTimeSteps; i++) {
    cs->Update();
  }

  // if filename arg present
  //   Create ConfigManager
  //   Call ReadConfig
  //   Create ConfigurationSimulator
  //   Call Start on ConfigurationSimulator
  //   Start for loop, length of simulation (where from?)
  //     Call Update on ConfigurationSimulator
  // else
  //   echo info to the user about needing a config file name

  return 0;
}
