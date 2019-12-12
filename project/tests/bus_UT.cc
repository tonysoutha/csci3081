// Copyright 2019 Tony Southa

#include <list>
#include <gtest/gtest.h>
#include "../src/stop.h"
#include "../src/passenger.h"
#include "../src/bus.h"
#include "../src/route.h"
#include "../src/random_passenger_generator.h"

class BusTests : public ::testing::Test {
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

TEST_F(BusTests, Constructor) {
  EXPECT_EQ(bus->GetName(), "bus1") <<
  "Name of bus not set correctly";
  EXPECT_EQ(bus->GetOutgoing(), out) <<
  "Outgoing route not set correctly";
  EXPECT_EQ(bus->GetIncoming(), in) <<
  "Incoming route not set correctly";
  EXPECT_EQ(bus->GetCapacity(), 50) <<
  "Capacity not instantiated correctly";
  EXPECT_EQ(bus->GetSpeed(), 1) <<
  "Speed not instantiated correctly";
}

TEST_F(BusTests, LoadPassenger) {
  bus->LoadPassenger(pass1);
  EXPECT_EQ(bus->GetNumPassengers(), 1) <<
  "LoadPassenger does not correctly increment num_passengers_";
  EXPECT_EQ(bus->GetPassengers().front(), pass1) <<
  "Passenger not added to passenger list";
}

TEST_F(BusTests, Move) {
  bus->Move();
  EXPECT_EQ(bus->GetDistanceRemaining(), -1) <<
  "Move does not correctly update distance_remaining_";
}

TEST_F(BusTests, GetName) {
  EXPECT_EQ(bus->GetName(), "bus1") <<
  "Get name returns incorrect name";
}

TEST_F(BusTests, GetNumPassengers) {
  EXPECT_EQ(bus->GetNumPassengers(), 0) <<
  "GetNumPassengers returns incorrect value";
}

TEST_F(BusTests, GetCapacity) {
  EXPECT_EQ(bus->GetCapacity(), 50) <<
  "GetCapacity returns incorrect value";
}

TEST_F(BusTests, IsTripComplete) {
  in->SetRouteComplete();
  out->SetRouteComplete();
  EXPECT_EQ(bus->IsTripComplete(), true) <<
  "IsTripComplete returns incorrect bool value";
}

TEST_F(BusTests, Update) {
  bus->LoadPassenger(pass1);
  bus->LoadPassenger(pass2);
  bus->Update();
  EXPECT_EQ(bus->GetDistanceRemaining(), 5) <<
  "Update does not move bus";
  bus->Update();
  EXPECT_EQ(bus->GetDistanceRemaining(), 4) <<
  "Update does not move bus";
  EXPECT_EQ(bus->GetPassengers().front()->GetTotalWait(), 3) <<
  "Update doesn't update passengers on bus";
}
