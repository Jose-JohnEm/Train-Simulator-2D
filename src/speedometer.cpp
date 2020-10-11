#include "../include/speedometer.hpp"
#include <iostream>

Speedometer::Speedometer() : throttle(100, 700), speed(0, JDK::STYLE::LATO, 100)
{
    speed.setPosition(500, 500);
    clock.restart();
}


Speedometer::~Speedometer()
{

}

JDK::Number Speedometer::getNumber()
{
    return this->speed;
}

JDK::Throttle Speedometer::getThrottle()
{
    return this->throttle;
}

void Speedometer::onEvent(sf::Event event)
{
    this->throttle.onEvent(event);
}

float limits(float value)
{
    if (value > 150)
        return 150;
    if (value < 0)
        return 0;
    return value;
}

void Speedometer::refreshSpeed()
{
    if (clock.getElapsedTime().asMilliseconds() > 100) {
        speed.add(0.04 * throttle.getNumber().getValue());
        clock.restart();
    }
}