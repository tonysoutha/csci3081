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
    std::list<Stop *> stop_list_out;
    std::list<double> probabilities_out;
    RandomPassengerGenerator * generator;
    double d1;
    double d2;
    double * distances;
    Route * out;
    Route * in;
    Passenger * pass1;
    Passenger * pass2;
    Bus * bus;

    virtual void SetUp() {
        stop1 = new Stop(1, 50, 100);
        stop2 = new Stop(2, 55, 105);
        stop3 = new Stop(3, 60, 110);
        stops_out[0] = stop1;
        stops_out[1] = stop2;
        stops_out[2] = stop3;

        stop_list.push_back(stop1);
        stop_list.push_back(stop2);
        stop_list.push_back(stop3);

        probabilities.push_back(0.1);
        probabilities.push_back(0.3);
        probabilities.push_back(0.2);

        generator = new RandomPassengerGenerator(probabilities_out,stop_list_out);

        d1 = 5;
        d2 = 7;
        distances[0] = d1;
        distances[1] = d2;

        pass1 =  new Passenger(1, "test_passenger1");
        pass2 =  new Passenger(2, "test_passenger2");
        out = new Route("outgoing",stops,distances,3,generator);
        in = new Route("incoming",)
        bus = new Bus("bus1",)
    }
    virtual void TearDown() {
        delete stop1;
        delete pass1;
        delete pass2;
        delete bus;
        // delete out;
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
  "AddPassengers does not correcly add passenger to the passenger_ list";
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

}
