/*! \mainpage Bus Simulator
 *
 * \section intro_sec Introduction
 *
 * To implement a bus simulation, we utilize four classes: bus, route, stop,
 * and passenger. Each class relies on the other classes to simulate a bus
 * following a route and picking up and dropping off passengers at different
 * stops. When the simulation is run, bus is updated and then route is updated.
 * When bus updates, it keeps track of passengers on the bus and determines
 * whether to load or unload the passengers. When route is updated, it calls
 * update on the stops which in turn calls update on the passengers.
 *
 * The passenger class is responsible for creating passengers and keeping
 * track of the times that passengers are on the bus and at a stop. Each
 * passenger is given a name and an id of their destination stop.
 *
 * The stop class maintains a list of passengers that gets updated each time
 * instance. Passengers that are generated at the stop are added to this list.
 * If a bus appears at a stop, the stop class will call a load method on the
 * list of passengers which will move them onto a bus.
 *
 * The route class creates routes that are a collection of stops. The route
 * class achieves this by maintaining a list of stops. Each time update is
 * called, the route class generates passengers at each of the stops and
 * calls update on each stop.
 *
 * The bus class creates bus objects that actually travel through the route
 * and stop at stops where they load and unload passengers. The bus class
 * maintains a list of passengers that is updated each time step. If the bus
 * is at a stop, passengers are still updated but there is also a check on
 * each passenger's destination stop to see if they need to be unloaded. Since
 * nothing is done with passengers after they get off a bus, unloading was
 * done by simply removing passengers being unloaded from the list.
 *
 * At the very end of a route, a bus will unload all of its remaining
 * passengers which is done by going through the passenger list and popping
 * each passenger off the list. Then another route is started. If the outbound
 * route is completed, the inbound route is started.
 *
 * \section user_guide_sec User Guide
 *

This user guide will guide you on how to download a bus simulation software. This software will allow the user to simulate a bus that travels through an outgoing and incoming route, picking up and dropping off passengers at their respective destinations. You have a choice of running the simulation with a configuration file in which you will be able to specify the route they want a bus to follow. Not providing a configuration file will run a default route.

In order to run the bus simulation, the software must first be downloaded.
Navigate to the following repository: https://github.umn.edu/umn-csci-3081-f19/repo-south211

\image html git-repo.png

Click “Clone or download” on the right side of the page and then click “Download as ZIP”. This will give you a zip file which you will then need to extract.

Open the zip file and click on extract. Doing so will enable the user to access the files of the software.

Now that the software has been downloaded, you will be able to navigate through the project folders and run the software. To do so, open your computer’s terminal and change your working directory to where you stored the repository. Once you are in the downloaded repository folder, change your working directory to “project”.

Now to create executables for the software, type “make” into the command line. This will output several lines of text to the command line. Once the process completes, executables will be created for transit_sim, config_sim, and vis_sim.

Running the Transit Simulator
Running transit_sim will output the result of the software onto the terminal using routes that have already been created. This might give you a good idea of what the output of this software is. In order to run transit_sim, ensure that you are in the “project” directory and then enter the following line into the terminal:
./build/bin/transit_sim

Running the Configuration Simulator
Running config_sim gives you the option of providing a configuration file for the bus simulation. This gives you the option of specifying the routes and stops you want the bus simulation to use once run.

To see an example of a configuration file, change your working directory to “config” and open the file “config.txt”. Each route in the configuration file has a name and stops listed below it. Each stop passes in parameters for the stop name, longitude, latitude, and the passenger generation probability (how likely you want passengers to appear at that stop).

To run the config_sim, ensure that you are in the “project” directory and then enter the following line into the terminal:
./build/bin/config_sim “config file”
The output of the simulation will be very similar to transit_sim, but the stops and routes that are used will be different.

Alternatively, you can run the config_sim with a default config file which is the config.txt file in the config folder. To do so, ensure that you are in the “project” directory and then enter the following line into the terminal:
./build/bin/config_sim
This is similar to the command above except that a config file is not provided. The config_sim is implemented so that in the case that an incorrectly formatted config file is passed in or no config file is passed in, the simulator will use the default config file “config.txt”.

Running the Visualization Simulator
The most interesting of all the simulators is vis_sim. Running vis_sim will allow you to see the output of the software on the terminal just like transit_sim and config_sim, but it will also allow you to see a visual representation of the software.

Vis_sim also gives you the option of providing a config file just like config_sim. For more information on how to create a config file, refer to the section above titled “Running the Configuration Simulator”

Running vis_sim is slightly different in that we need to provide the command line with a port number to start the server in which we will be creating a visual representation of the simulation. To run vis_sim, enter the following line into the terminal:
./build/bin/vis_sim 8081 “config file”
8081 is our port number and is used in the address for the web server in which we will be visualizing our simulation. The config file is provided by you, but it is possible to run vis_sim without the config file in which case the default config file config.txt will be used.

To navigate to the server, open a web browser and navigate to the following web address:
http://127.0.0.1:8081/web_graphics/project.html
* Note that this web address will only load once we run the simulation. Attempting to visit the address without running the simulation will not work.

Now that we have the web page open, we can see the map that the simulation will use as well as two parameters that we can adjust: number of time steps to run and time steps between buses for route. Move the slider to set these parameters to your desire. Once you are ready to run the simulation, click “start”.

Hitting start will immediately display your route on the graph with a black line with stops represented with white circles and a number inside them which indicates their stop numbers. Buses will start being generated, they appear in red and contain the bus name inside. Hovering your mouse over buses and stops will yield information about the current state of the simulation.
	For buses: number of passengers on the bus and the passenger capacity of the bus
	For stops: number of people waiting

Notice that in addition to the visual representation of the simulation on the web server, there is also output on the terminal.
 *
 */
