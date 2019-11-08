/*! \mainpage Bus Simulator
 *
 * \section intro_sec Introduction
 *
 * To implement a bus simulation, we utilize four classes: bus, route, stop,
 * and passenger. Each class relies on the other classes to simulate a bus
 * route. In particular, when the simulation is run bus is updated and then
 * route is updated. When bus updates it keeps track of passengers on the
 * bus and determines whether to load or unload them. When route is updated,
 * it calls update on the stops which in turn calls update on the passengers.
 *
 * The passenger class is responsible for keeping track of the
 * times that passengers are on the bus and at a stop. The stop class
 * maintains a list of passengers that gets updated for each time instance.
 * Once a bus appears at a stop, the stop calls loadpassengers which adds
 * all passengers on the bus as long as the bus max capacity allows for it.
 *
 * Passengers once they are on the bus are updated at every time instance.
 * Each update checks if the bus is at a stop. If any of the passengers are
 * at their destination, the bus unloads them. The way this is implemented,
 * the passengers are simply deleted from their passenger list.
 *
 * At the very end of a route, a bus will all of its remaining passengers
 * and then start on another route. If the outbound route is completed,
 * the inbound route is started.
 *
 */
