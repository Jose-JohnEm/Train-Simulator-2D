#include "window.hpp"
#include "speedometer.hpp"

int main(void)
{
    JDK::Window window(sf::VideoMode(1280, 720), "Train Simulator 2D - Lyon Edition");

    window.setPosition(sf::Vector2i(0,0));
    window.setFramerateLimit(60);

    Speedometer spd;

    JDK::Number time(0, JDK::STYLE::LATO);
    time.setPosition(500, 100);
    sf::Clock clock;

    sf::Event event;
    
    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            spd.onEvent(event);
        }
        if (clock.getElapsedTime().asSeconds() >= 1) {
            time.add(1);
            clock.restart();
        }

        spd.refreshSpeed();

        window.clear();
        window.draw(time);
        window.drawJDK(spd);
        window.display();
    }
 //45//
    return 0;
} 