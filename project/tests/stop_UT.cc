// Copyright 2019 Tony Southa

#include <list>
#include <gtest/gtest.h>
#include "../src/stop.h"
#include "../src/passenger.h"
#include "../src/bus.h"
#include "../src/route.h"
#include "../src/random_passenger_generator.h"

class StopTests : public ::testing::Test {
 protected:
    Stop * stop1;
    Stop * stop2;
    Stop * stop3;

    Stop ** stops_out;
    Stop ** stops_in;

    std::list<Stop *> stop_list_out;
    std::list<Stop *> stop_list_in;

    std::list<double> probabilities_out;
    std::list<double> probabilities_in;

    RandomPassengerGenerator * generator;

    double d1;
    double d2;

    double * distances_out;
    double * distances_in;

    Route * out;
    Route * in;

    Passenger * pass1;
    Passenger * pass2;

    Bus * bus;

    virtual void SetUp() {
        stop1 = new Stop(1, 50, 100);
        stop2 = new Stop(2, 55, 105);
        stop3 = new Stop(3, 60, 110);

        stops_out = new Stop*[3];
        stops_out[0] = stop1;
        stops_out[1] = stop2;
        stops_out[2] = stop3;

  stops_in = new Stop*[3];
	stops_in[0] = stop3;
	stops_in[1] = stop2;
	stops_in[2] = stop1;

        stop_list_out.push_back(stop1);
        stop_list_out.push_back(stop2);
        stop_list_out.push_back(stop3);

	stop_list_in.push_back(stop3);
        stop_list_in.push_back(stop2);
        stop_list_in.push_back(stop1);

        probabilities_out.push_back(0.1);
        probabilities_out.push_back(0.3);
        probabilities_out.push_back(0.2);

	probabilities_in.push_back(0.3);
        probabilities_in.push_back(0.1);
        probabilities_in.push_back(0.4);

        generator = new RandomPassengerGenerator(probabilities_out,stop_list_out);

        d1 = 5;
        d2 = 7;
        distances_out = new double[2];
        distances_out[0] = d1;
        distances_out[1] = d2;
        distances_in = new double[2];
	distances_in[0] = d2;
	distances_in[1] = d1;

        pass1 =  new Passenger(1, "test_passenger1");
        pass2 =  new Passenger(2, "test_passenger2");
        out = new Route("outgoing",stops_out,distances_out,3,generator);
        in = new Route("incoming",stops_in,distances_in,3,generator);
        bus = new Bus("bus1",out,in,50,1);
    }
    virtual void TearDown() {
        delete stop1;
	delete stop2;
	delete stop3;
  delete stops_in;
  delete stops_out;
  delete distances_in;
  delete distances_out;

        delete pass1;
        delete pass2;
        delete bus;
        delete out;
        delete in;
    }
};

TEST_F(StopTests, AddPassengers) {
  EXPECT_EQ(stop1->GetPassengersPresent(), 0);
  EXPECT_EQ(stop1->GetPassengerList().empty(), true);
  stop1->AddPassengers(pass1);
  EXPECT_EQ(stop1->GetPassengersPresent(), 1) <<
  "AddPassengers does not correctly update passengers_present_ member variable";
  EXPECT_EQ(stop1->GetPassengerList().front(), pass1) <<
  "AddPassengers does not correctly add passenger to the passenger_ list";
}

TEST_F(StopTests, Update) {
  stop1->AddPassengers(pass1);
  pass1->Update();
  pass2->Update();
  EXPECT_EQ(pass1->GetTimeOnBus(), 0) <<
  "Update increments time_on_bus when passenger is at stop";
  EXPECT_EQ(pass1->GetTimeAtStop(), 1) <<
  "Update does not correctly increment wait_at_stop_ when passenger is at stop";
  pass1->GetOnBus();
  pass1->Update();
  EXPECT_EQ(pass1->GetTimeOnBus(), 2) <<
  "Update does not correctly inremement time_on_bus when passenger is on bus";
  EXPECT_EQ(pass1->GetTimeAtStop(), 1) <<
  "Update increments wait_at_stop_ when passenger is on bus";
}

TEST_F(StopTests, GetOnBus) {
  pass1->GetOnBus();
  EXPECT_EQ(pass1->GetTimeOnBus(), 1) <<
  "GetOnBus does not correctly increment passenger time on bus";
}

TEST_F(StopTests, LoadPassengers) {
  stop1->AddPassengers(pass1);
  stop1->AddPassengers(pass2);
  stop1->LoadPassengers(bus);
  EXPECT_EQ(stop1->GetPassengersPresent(), 0) <<
  "LoadPassengers does not load all passengers from the stop";
  EXPECT_EQ(bus->GetNumPassengers(), 2) <<
  "LoadPassengers does not load passengers onto the bus";
}

TEST_F(StopTests, GetLatitude) {
  EXPECT_EQ(stop1->GetLatitude(), 100) <<
  "GetLatitude returns the wrong value";
}

TEST_F(StopTests, GetLongitude) {
  EXPECT_EQ(stop1->GetLongitude(), 50) <<
  "GetLongitude returns the wrong value";
}

TEST_F(StopTests, GetPassengersPresent) {
  stop1->AddPassengers(pass1);
  stop1->AddPassengers(pass2);
  EXPECT_EQ(stop1->GetPassengersPresent(), 2) <<
  "GetPassengersPresent returns the wrong value";
}

TEST_F(StopTests, GetPassengerList) {
  stop1->AddPassengers(pass1);
  stop1->AddPassengers(pass2);
  std::list<Passenger *> pass_list;
  pass_list.push_back(pass1);
  pass_list.push_back(pass2);
  EXPECT_EQ(stop1->GetPassengerList(), pass_list) <<
  "GetPassengerList returns an incorrect list of passengers";
}
