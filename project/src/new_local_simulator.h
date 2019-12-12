/**
 * @file new_local_simulator.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#ifndef SRC_NEW_LOCAL_SIMULATOR_H_
#define SRC_NEW_LOCAL_SIMULATOR_H_

#include <vector>
#include <fstream>

#include "src/local_simulator.h"

class NewLocalSimulator : public Simulator {
 public:
  bool Start() override;
  bool Update() override;
  void SetOutput(std::ostream * f);
 private:
  std::vector<int> bus_counters_;
  std::vector<int> bus_start_timings_;
  std::vector<int> time_since_last_bus_generation_;
  int simulation_time_elapsed_;
  std::ostream * f_ptr;
};

#endif  // SRC_NEW_LOCAL_SIMULATOR_H_
