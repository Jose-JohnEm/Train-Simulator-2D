#include "../../include/throttle.h"

using namespace JDK;

Throttle::Throttle()
{
    initThrottle();
}

Throttle::Throttle(int x, int y, bool central)
{
    initThrottle();
    setPosition(x, y, central);
}

Throttle::Throttle(sf::Vector2f position, bool central)
{
    initThrottle();
    setPosition(position, central);
}

void Throttle::initThrottle()
{
    tige.setSize(sf::Vector2f(30, 500));
    button.setSize(sf::Vector2f(70, 50));
}

Throttle::~Throttle()
{

}

void Throttle::setPosition(int x, int y, bool central)
{
    if (central) {
        tige.setPosition(x - tige.getSize().x, y - tige.getSize().y);
    } else {
        tige.setPosition(x, y);
    }
}

void Throttle::setPosition(sf::Vector2f position, bool central)
{
    
}

sf::RectangleShape Throttle::getButton()
{
    return button;
}

sf::RectangleShape Throttle::getTige()
{
    return tige;
}