#ifndef SPEEDOMETER_H
#define SPEEDOMETER_H

#include "throttle.hpp"
#include "number.hpp"
#include <SFML/System/Clock.hpp>

class Speedometer
{
    public:
        Speedometer();
        ~Speedometer();

        JDK::Throttle getThrottle();
        JDK::Number getNumber();
        void onEvent(sf::Event event);
        void refreshSpeed();

    private:
        JDK::Throttle throttle;
        JDK::Number speed;
        sf::Clock clock;

};

#endif 