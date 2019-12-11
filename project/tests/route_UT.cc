// Copyright 2019 Tony Southa

#include <list>
#include <gtest/gtest.h>
#include "../src/stop.h"
#include "../src/passenger.h"
#include "../src/bus.h"
#include "../src/route.h"
#include "../src/random_passenger_generator.h"

class RouteTests : public ::testing::Test {
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

TEST_F(RouteTests, Update) {
  stop1->AddPassengers(pass1);
  out->Update();
  EXPECT_EQ(stop1->GetPassengerList().front()->GetTimeAtStop(), 1) <<
  "Update does not update stops";
}

TEST_F(RouteTests, Clone) {
  Route * clone = out->Clone();
  EXPECT_EQ(out->GetName(), clone->GetName()) <<
  "Cloned route has different name";
  EXPECT_EQ(out->GetStops(), clone->GetStops()) <<
  "Cloned route has different stops";
  EXPECT_EQ(out->GetDistances(), clone->GetDistances()) <<
  "Cloned route has different distances";
  EXPECT_EQ(out->GetNumStops(), clone->GetNumStops()) <<
  "Cloned route has different num_stops_";
}

TEST_F(RouteTests, GetDistances) {
  std::list<double> distances;
  distances.push_back(d1);
  distances.push_back(d2);
  EXPECT_EQ(out->GetDistances(), distances) <<
  "GetDistances returns incorrect list of distances";
}

TEST_F(RouteTests, GetNumStops) {
  EXPECT_EQ(out->GetNumStops(), 3) <<
  "GetNumStops returns incorrect value";
}

TEST_F(RouteTests, GetDestinationStop) {
  EXPECT_EQ(out->GetDestinationStop(), stop1) <<
  "GetDestinationStop returns incorrect stop";
}

TEST_F(RouteTests, IsAtEnd) {
  out->NextStop();
  EXPECT_EQ(out->IsAtEnd(), false);
  out->NextStop();
  EXPECT_EQ(out->IsAtEnd(), true);
}

TEST_F(RouteTests, NextStop) {
  out->NextStop();
  EXPECT_EQ(out->GetDestinationStop(), stop2) <<
  "NextStop incorrectly updates destination_stop_";
  EXPECT_EQ(out->GetPreviousStop(), stop1) <<
  "NextStop incorrectly updates prev";
}

TEST_F(RouteTests, GetNextStopDistance) {
  in->NextStop();
  EXPECT_EQ(in->GetNextStopDistance(), 7) <<
  "GetNextStopDistance returns incorrect distance";
}

TEST_F(RouteTests, IsRouteComplete) {
  EXPECT_EQ(out->IsRouteComplete(), false) <<
  "IsRouteComplete returns incorrect bool value";
}

TEST_F(RouteTests, SetRouteComplete) {
  out->SetRouteComplete();
  EXPECT_EQ(out->IsRouteComplete(), true) <<
  "SetRouteComplete does not correctly update route_complete";
}

TEST_F(RouteTests, GetPreviousStop) {
  in->NextStop();
  EXPECT_EQ(in->GetPreviousStop(), stop3) <<
  "GetPreviousStop returns incorrect stop";
}

TEST_F(RouteTests, GetName) {
  EXPECT_EQ(out->GetName(), "outgoing") <<
  "GetName returns incorrect name";
}

TEST_F(RouteTests, GetStops) {
  EXPECT_EQ(out->GetStops(), stop_list_out) <<
  "GetStops returns incorrect stop list";
}

TEST_F(RouteTests, GetDestinationStopIndex) {
  EXPECT_EQ(in->GetDestinationStopIndex(), 0) <<
  "GetDestinationStopIndex returns incorrect value";
  in->NextStop();
  EXPECT_EQ(in->GetDestinationStopIndex(), 1) <<
  "GetDestinationStopIndex returns incorrect value";
}

// TEST_F(RouteTests, UpdateRouteData) {
//   out->UpdateRouteData();
//   // EXPECT_EQ(out->GetRouteData().id, out->GetName());
//
//   // EXPECT_EQ(out->GetRouteData().stops, temp_vector);
// }
//
// TEST_F(RouteTests, GetRouteData) {
//   std::vector<StopData>::iterator it = in->GetRouteData().stops.begin();
//   EXPECT_EQ(it->id, "3");
//
// }
