#include <SFML/Audio.hpp>
#include <SFML/Config.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

#include <JoseDK.h>

int main(int ac, char *av[])
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Train Simulator 2D - Lyon Edition");

    sf::Font font;
    font.loadFromFile("Others/fonts/FakeHope.ttf");

    sf::Text speed;

    speed.setString("124");
    speed.setFont(font);
    speed.setPosition(500, 500);
    speed.setCharacterSize(100);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(speed);
        window.display();
    }

    return 0;
} 