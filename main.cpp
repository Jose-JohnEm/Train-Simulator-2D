#include <SFML/Audio.hpp>
#include <SFML/Config.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

#include "include/throttle.h"
#include "include/window.h"
#include "include/text.h"
#include "include/number.h"

int main(int ac, char *av[])
{
    JDK::Window window(sf::VideoMode(1280, 720), "Train Simulator 2D - Lyon Edition");

    window.setPosition(sf::Vector2i(0,0));
    window.setFramerateLimit(60);

    JDK::Throttle trl(100, 700);

    JDK::Number speed(149, JDK::STYLE::LATO, 100);
    speed.setPosition(500, 500);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            trl.onEvent(event);
        }

        window.clear();
        window.drawJDK(trl);
        window.draw(speed);
        window.display();
    }

    return 0;
} 