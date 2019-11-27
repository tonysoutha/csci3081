#ifndef CONFIGURATION_SIMULATOR_H_
#define CONFIGURATION_SIMULATOR_H_

#include <vector>
#include <list>

#include "config_manager.h"

class Route;
class Bus;
class Stop;

class ConfigurationSimulator {
    public:
        ConfigurationSimulator();
        ~ConfigurationSimulator();

        void Start(const std::vector<int>&, const int&);
        void Update();
        void SetConfigManager(ConfigManager * cm);

    private:
        ConfigManager* configManager_;

        std::vector<int> busStartTimings_;
        std::vector<int> timeSinceLastBus_;
        int numTimeSteps_;
        int simulationTimeElapsed_;

        std::vector<Route *> prototypeRoutes_;
        std::vector<Bus *> busses_;

        int busId = 1000;
};

#endif // CONFIGURATION_SIMULATOR_H_
