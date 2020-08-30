#include <SFML/Audio.hpp>
#include <SFML/Config.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main(int ac, char *av[])
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Train Simulator 2D - Lyon Edition");
    sf::CircleShape rond(50.f, 30);
    rond.setFillColor(sf::Color::White);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(rond);
        window.display();
    }

    return 0;
} 