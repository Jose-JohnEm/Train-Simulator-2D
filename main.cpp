#include <JoseDK/window.hpp>
#include <JoseDK/speedometer.hpp>

int main(void)
{
    JDK::Window window(sf::VideoMode(1280, 720), "Train Simulator 2D - Lyon Edition");

    window.setPosition(sf::Vector2i(0,0));
    window.setFramerateLimit(60);

    Speedometer spd;

    sf::Event event;
    
    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            spd.onEvent(event);
        }
        spd.refreshSpeed();

        window.clear();
        window.drawJDK(spd);
        window.display();
    }
    return 0;
} 