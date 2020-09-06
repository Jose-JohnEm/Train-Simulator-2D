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

    JDK::Text title("Train Simulator 2D", JDK::STYLE::LCD, 100);

    title.setPosition(200, 0);
    title.setCharacterSize(100);

    JDK::Throttle trl(100, 700);

    JDK::Number num(124, JDK::STYLE::LCD, 100);
    num.setPosition(300, 300);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(title);
        window.draw(num);
        window.drawJDK(trl);
        window.display();
    }

    return 0;
} 