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
    button.setSize(sf::Vector2f(80, 40));
    
    button.setOrigin(button.getSize().x / 2, button.getSize().y / 2);
}

Throttle::~Throttle()
{

}

void Throttle::setPosition(int x, int y, bool central)
{
    sf::Vector2f size;
    sf::Vector2f position;

    if (central) {
        tige.setPosition(x - tige.getSize().x, y - tige.getSize().y);
    } else {
        tige.setPosition(x, y);
    }

    position = tige.getPosition();
    size = tige.getSize();

    button.setPosition(position.x + size.x / 2, position.y + size.y / 2);
}

void Throttle::setPosition(sf::Vector2f position, bool central)
{
    setPosition(position.x, position.y, central);
}

sf::RectangleShape Throttle::getButton()
{
    return button;
}

sf::RectangleShape Throttle::getTige()
{
    return tige;
}