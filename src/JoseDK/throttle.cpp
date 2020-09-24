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
    value.setFontPath(STYLE::LCD);
    value.setCharacterSize(100);
    value.setValue(0);
    value.setOrigin(0, value.getCharacterSize() / 2);

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
    value.setPosition(position.x + 100, position.y + size.y / 2 - 10);
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

Number Throttle::getNumber()
{
    return value;
}

#include <iostream>
using namespace std;

bool clickOn(sf::RectangleShape elem)
{
    sf::IntRect rect(elem.getPosition().x, elem.getPosition().y,
        elem.getGlobalBounds().width, elem.getGlobalBounds().height);

    if (rect.contains(sf::Mouse::getPosition())) {
        return true;
    }
    return false;
}

void Throttle::onEvent(sf::Event event)
{
    throttlePower(event);

    throttleValueColor();
}

void Throttle::throttleValueColor()
{
    int val(value.getValue());
    if (val > 0) {
        value.setFillColor(sf::Color::Green);
    } else if (val < 0) {
        value.setFillColor(sf::Color::Red);
    } else {
        value.setFillColor(sf::Color::White);
    }
}

void Throttle::throttlePower(sf::Event event)
{
    float delta = event.mouseWheelScroll.delta * -10;
    int interval = tige.getPosition().y + tige.getSize().y - button.getPosition().y;
    int level = value.getValue();

    if (delta > 1000 || delta < -1000) return;

    if (button.getPosition().y < tige.getPosition().y && delta < 0) {
        return;
    }
    if (button.getPosition().y > tige.getPosition().y + tige.getSize().y && delta > 0) {
        return;
    }

    button.move(0, delta);
    interval = tige.getPosition().y + tige.getSize().y - button.getPosition().y;
    value.setValue(interval / 25 - 10);
}
