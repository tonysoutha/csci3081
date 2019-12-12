/**
 * @file configuration_sim.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#include <iostream>
#include <fstream>
#include <string>

#include "src/config_manager.h"
#include "src/configuration_simulator.h"

int main(int argc, char**argv) {
  std::cout << "Usage: ./build/bin/configuration_sim <config_filename>";
  std::cout << std::endl;

  // Check command line params for config file name
  ConfigManager * cm = new ConfigManager;
  std::string file = "config.txt";  // Default file
  if (argc > 1) {
    file = argv[1];  // Use file passed in from command line
  }

  const std::string filename = file;
  std::ifstream input_file("config/" + filename);
  if (!(input_file.is_open())) {  // Ensures the file passed in is valid
    file = "config.txt";  //  Use default file if an invalid file is passed in
    return 1;
  }

  cm->ReadConfig(file);

  if (cm->GetRoutes().size() == 0) {
  // Handles case where empty config file is passed in
    std::cout << "Error: Empty file" << std::endl;
    return 1;
  }

  ConfigurationSimulator * cs = new ConfigurationSimulator;
  std::vector<int> busStartTimings;  // Set default busstarttimings
  for (int i = 0; i < cm->GetRoutes().size()-1; i++) {
    busStartTimings.push_back(0.5);
  }
  int numTimeSteps = 25;  // Set default numtimesteps
  cs->SetConfigManager(cm);
  cs->Start(busStartTimings, numTimeSteps);
  for (int i = 0; i < numTimeSteps; i++) {
    cs->Update();
  }
  return 0;
}
