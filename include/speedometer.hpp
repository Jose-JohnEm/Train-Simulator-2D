#ifndef SPEEDOMETER_H
#define SPEEDOMETER_H

#include <memory>
#include "throttle.h"
#include "number.h"

class Speedometer
{
    public:
        Speedometer();
        ~Speedometer();

    private:
        std::shared_ptr<JDK::Throttle> throttle;
        std::shared_ptr<JDK::Number> speed;

};

#endif 