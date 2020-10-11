#include <SFML/Audio.hpp>
#include <SFML/Config.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

#include "throttle.hpp"
#include "window.hpp"
#include "text.hpp"
#include "number.hpp"
#include "speedometer.hpp"

int main(int ac, char *av[])
{
    JDK::Window window(sf::VideoMode(1280, 720), "Train Simulator 2D - Lyon Edition");

    window.setPosition(sf::Vector2i(0,0));
    window.setFramerateLimit(60);

    Speedometer spd;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            spd.onEvent(event);
        }

        spd.refreshSpeed();

        window.clear();
        window.drawJDK(spd);
        window.display();
    }

    (void)ac;
    (void)av;
    return 0;
} 