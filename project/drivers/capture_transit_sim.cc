#include <ctime>
#include <iostream>
#include <random>
#include <fstream>

#include "new_local_simulator.h"

int main(int argc, char *argv[]) {
  std::ofstream * of_ptr;
  std::ostream * out_stream;
  of_ptr->open(argv[1]);
  out_stream = of_ptr;
  // if (!f_ptr.IsOpen()) {
  //   return 1;
  // }
  int rounds = 50; //Number of rounds of generation to simulate in test

  srand((long)time(NULL)); //Seed the random number generator...

  NewLocalSimulator my_sim;
  my_sim.SetOutput(out_stream);

  *out_stream << "/*************************" << std::endl << std::endl;
  *out_stream << "         STARTING" << std::endl;
  *out_stream << "        SIMULATION" << std::endl;
  *out_stream << "*************************/" << std::endl;

  my_sim.Start();

  *out_stream << "/*************************" << std::endl << std::endl;
  *out_stream << "           BEGIN" << std::endl;
  *out_stream << "          UPDATING" << std::endl;
  *out_stream << "*************************/" << std::endl;

  for (int i = 0; i < rounds; i++) {
	  my_sim.Update();
  }

  *out_stream << "/*************************" << std::endl << std::endl;
  *out_stream << "        SIMULATION" << std::endl;
  *out_stream << "         COMPLETE" << std::endl;
  *out_stream << "*************************/" << std::endl;

  of_ptr->close();
  return 0;
}
