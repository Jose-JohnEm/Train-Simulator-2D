#include "../include/speedometer.hpp"

Speedometer::Speedometer() : throttle(100, 700), speed(0, JDK::STYLE::LATO, 100)
{
    speed.setPostion(500, 500);    
}


Speedometer::~Speedometer()
{
    
}