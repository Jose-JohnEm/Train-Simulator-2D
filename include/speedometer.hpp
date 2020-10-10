#ifndef SPEEDOMETER_H
#define SPEEDOMETER_H

#include <memory>
#include "throttle.hpp"
#include "number.hpp"

class Speedometer
{
    public:
        Speedometer();
        ~Speedometer();

    private:
        JDK::Throttle throttle;
        JDK::Number speed;

};

#endif 