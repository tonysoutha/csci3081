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
 */
