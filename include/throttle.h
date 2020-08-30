#ifndef THROTTLE_H
#define THROTTLE_H

#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/CircleShape.hpp>

namespace JDK
{
    class Throttle
    {
        public:
            Throttle();
            Throttle(int x, int y, bool central = true);
            Throttle(sf::Vector2f position, bool central = true);
            ~Throttle();

            void setPosition(int x, int y, bool central = true);
            void setPosition(sf::Vector2f position, bool central = true);

            sf::RectangleShape getTige();
            sf::RectangleShape getButton();

        private:
            sf::RectangleShape tige;
            sf::RectangleShape button;

            void initThrottle();
    };

}

#endif