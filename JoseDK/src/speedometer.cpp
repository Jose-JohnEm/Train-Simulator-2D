#include "speedometer.hpp"
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
    float a(0);

    if (clock.getElapsedTime().asMilliseconds() > 100) {
        a = throttle.getNumber().getValue();
        a *= 0.0088;
        a *= 3.6;
        if (a > 0) {
            a *= 1.f - (float)speed.getValue() / 150.f;
        } else {
            a -= (float)speed.getValue() / (150.f * 8.f);
        }

        speed.add(a);
        clock.restart();
    }
}