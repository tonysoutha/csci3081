// Copyright 2019 Tony Southa

#ifndef SRC_MAINPAGE_H_
#define SRC_MAINPAGE_H_

/*! \mainpage Bus Simulator

 \section intro_sec Introduction

 This page contains the user guide and developer guide for the bus
 simulation software. This software simulates a bus as it travels through
 a route, loading and unloading passengers at stops. For users, proceed to
 the user guide for more information. For developers, proceed to the developer
 guide for more information.

 \section user_guide_sec User Guide

 This user guide will guide you on how to download a bus simulation software.
 This software will allow the user to simulate a bus that travels through an
 outgoing and incoming route, picking up and dropping off passengers at their
 respective destinations. You have a choice of running the simulation with a
 configuration file in which you will be able to specify the route they want
 a bus to follow. Not providing a configuration file will run a default route.

 In order to run the bus simulation, the software must first be downloaded.
 Navigate to the following repository: \n
 https://github.umn.edu/umn-csci-3081-f19/repo-south211 \n

 \image html ../docs/git-repo.png "github repository"

 Click “Clone or download” on the right side of the page shown in the image
 above. Then click “Download as ZIP”. This will give you a zip file which you
 will then need to extract.

 Open the zip file and click on extract. Doing so will enable the user to
 access the files of the software.

 Now move the folder to your home directory so that it can be easily accessed.

 Now that the software has been downloaded, you will be able to navigate
 through the project folders and run the software. To do so, open your
 computer’s terminal.The folder with our software should be on your homepage.
 To move into this folder, enter the following command into the terminal: \n
 \code cd repo-south211-master/project \endcode

 To create executables for the software, enter the following command into
 the terminal. \n
 \code make \endcode
 This will output several lines of text to the command line. Once the process
 completes, executables will be created for transit_sim, config_sim,
 and vis_sim.

 \subsection tsim Running the Transit Simulator
 Running transit_sim will output the result of the software onto the terminal
 using routes that have already been created. This might give you a good idea
 of what the output of this software is. In order to run transit_sim, enter
 the following line into the terminal: \n
 \code ./build/bin/transit_sim \endcode

 \subsection csim Running the Configuration Simulator
 Running config_sim gives you the option of providing a configuration
 file for the bus simulation. This gives you the option of specifying
 the routes and stops you want the bus simulation to use once run.

 \note To see an example of a configuration file, change your working directory
 to “config” by entering the following command into the terminal: \n
 \code atom config/config.txt \endcode
 Doing so will open the following file as seen below.\n
 \image html config.png
 Each route in the configuration file has a name and stops listed below it.
 Each stop passes in parameters for the stop name, longitude, latitude, and the
 passenger generation probability (how likely you want passengers to appear at
 that stop). You have the ability to make your own config file to pass into the
 configuration simulator as well as the visualization simulator. Simply follow
 the format of config.txt and use your own stops and routes.

 To run the config_sim, ensure that you are in the “project” directory. Your
 working directory will likely be "config" if you followed the stops above
 to add/view the config file. You can see which directory you are in by
 entering the following command into the terminal:
 \code pwd \endcode
 If the last directory in the output is not “project”, enter the following
 lines into the terminal:
 \code cd ~
  cd repo-south211-master/project \endcode

 Once you are in the project directory, enter the following line into the
 terminal: \n
 \code ./build/bin/config_sim “config file” \endcode
 The output of the simulation will be very similar to transit_sim, but the
 stops and routes that are used will be different.

 Alternatively, you can run the config_sim with a default config file which is
 the config.txt file in the config folder. To do so, ensure that you are in the
 “project” directory and then enter the following line into the terminal: \n
 \code ./build/bin/config_sim \endcode
 This is similar to the command above except that a config file is not
 provided. The config_sim is implemented so that in the case that an
 incorrectly formatted config file is passed in or no config file is passed
 in, the simulator will use the default config file “config.txt”.

 \subsection vsim Running the Visualization Simulator
 The most interesting of all the simulators is vis_sim. Running vis_sim will
 allow you to see the output of the software on the terminal just like
 transit_sim and config_sim, but it will also allow you to see a visual
 representation of the software.

 Vis_sim also gives you the option of providing a config file just like
 config_sim. For more information on how to create a config file, refer to
 the section above titled “Running the Configuration Simulator”.

 Running vis_sim is slightly different in that we need to provide the
 command line with a port number to start the server in which we will be
 creating a visual representation of the simulation. To run vis_sim,
 enter the following line into the terminal: \n
 \code ./build/bin/vis_sim 8081 “config file” \endcode

 8081 is our port number and is used in the address for the web server in
 which we will be visualizing our simulation. The config file is provided
 by you, but it is possible to run vis_sim without the config file in which
 case the default config file config.txt will be used.

 To navigate to the server, open a web browser and navigate to the following
 web address: http://127.0.0.1:8081/web_graphics/project.html \n
 * Note that this web address will only load once we run the simulation.
 Attempting to visit the address without running the simulation will not work.

 Now that we have the web page open, we can see the map that the simulation
 will use as well as two parameters that we can adjust: number of time steps
 to run and time steps between buses for route. Move the slider to set these
 parameters to your desire. Once you are ready to run the simulation, click
 “start”.

 Hitting start will immediately display your route on the graph with a black
 line with stops represented with white circles and a number inside them which
 indicates their stop numbers. Buses will start being generated, they appear
 in red and contain the bus name inside. Below is an image of what your working
 simulation should resemble. \n

 \image html server.png

 Hovering your mouse over buses and stops will yield information about the
 current state of the simulation. \n
 	For buses: number of passengers on the bus and the passenger capacity of
  the bus \n
 	For stops: number of people waiting \n


 Notice that in addition to the visual representation of the simulation on the
 web server, there is also output on the terminal just like the other
 simulations.

\section devel_guide_sec Developer Guide

To implement a bus simulation, four important classes are utilized: bus, route,
stop, and passenger. These four classes are the root of the simulation’s
functionality and all four interact with each other in some way. Understanding
how these four classes were implemented will allow you to understand the
system. Furthermore, understanding the relationship between these four classes
and how they are used in the three simulators (transit, configuration, visual)
will give you the opportunity to enhance this software.

\subsection Passenger
The passenger class creates passenger objects which can wait at a stop and get
on a bus to head towards their destination. Each time step of the simulation
updates different passenger parameters. If a passenger is at a stop, the
“wait_at_stop_” parameter is incremented by one. If the passenger is on a
bus, the “time_on_bus_” parameter is incremented by one.

\subsection Stop
The stop class creates stops that passengers and buses can arrive at. Each
stop maintains a list of passengers. When a passenger arrives at a stop, the
passenger is added to the passenger list for that stop. Each time step,
stops are responsible for calling update on their passengers. If a bus shows
up at a stop, the stop will load passengers onto that bus. This is done by
iterating through the passenger list, calling a load passenger method on each
passenger.

\subsection Route
Routes are a collection of stops which are maintained with a list. Since
routes have access to all stops, my implementation generates passengers
in the route update method. This will generate passengers at all stops.
Routes are also responsible for calling update on their stops. This, in
effect, will result in each stop calling update on their passengers. The
route class has a method named “UpdateRouteData”. It is through this method
that we are able to send information to a visual simulation of the bus route.
In particular, this method sends information of each stop in a route including
the location so that the visual simulator can display the route.

\subsection Bus
The bus class brings all the other classes together and, as a result, is the
most complex. Each bus holds two routes, incoming and outgoing, that the bus
will travel on. The bus also maintains a list of passengers that grows as
passengers are loaded onto the bus at stops and diminishes as passengers
are unloaded from the bus when they reach their stop. At the very last stop,
all passengers are unloaded because that route is then complete. Each time a
bus visits a stop, the parameter destination_stop_index gets incremented and
once this parameter is equal to the number of stops on the route, the route
is effectively complete. If this was the outgoing route, the incoming route
will be started. If the incoming route is complete, the bus has completed
all its routes and is no longer used. The method named “UpdateBusData” is
important to the visual simulation for sending information about the bus
including its location. This will allow the visual simulation to show the
bus moving along its route as it loads and unloads passengers.

\subsection Simulators

Three simulations were implemented. To make the simulations, move to the
project directory and enter “make” into the terminal.
Then call... \n
<b> transit_sim </b> with \code ./build/bin/transit_sim \endcode \n
<b> config_sim </b> with \code ./build/bin/config_sim "optional config file”
\endcode \n
<b> vis_sim </b> with \code ./build/bin/vis_sim 8081 "optional config file"
\endcode\n

Transit sim runs the simulation on a route that has already been created.
This outputs the result of the simulation to the terminal.

Config_sim is identical to transit_sim, however it can take in a config file.
To see this config file, navigate to the config folder and view the config.txt
file inside. If no config file is provided or an invalid file is passed in,
the simulator simply uses the default config file config.txt. My implementation
of config_sim does not give the user the opportunity to change the number of
time steps or the bus start timings for the simulation, as this has been set
as a default in the configuration driver. \n

Vis_sim is like config_sim in that it can take in an optional config file,
but it also opens a web server to create a visual representation of the
simulation. After running vis_sim, visit the following address:
http://127.0.0.1:8081/web_graphics/project.html
This web page will allow you to change the bus start timings and number of
time steps for the simulation. Hitting “start” will initiate the simulation,
displaying routes, stops, and buses moving through the routes.

\subsection Testing
Unit tests and regression tests were implemented. Unit tests can be found
in the tests folder. They can be used by entering "make" in the tests folder
and then entering \code ./build/bin/unittest \endcode from the project
directory. Functionality is of implemented methods is tested here.
Regression tests can be used by moving into the drivers folder and calling
\code make regression_test2_test \endcode
and then calling \code ./build/bin/regression_test2_test \endcode from the
project directory. Each time this regression test is run, we can observe
that the same output is produced every run.
 */

#endif  // SRC_MAINPAGE_H_
