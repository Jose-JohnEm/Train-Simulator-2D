#ifndef DRAWABLE_H
#define DRAWABLE_H

#include <SFML/Graphics/Transformable.hpp>

namespace JDK
{
    class Drawable
    {
        public:
            Drawable(sf::Transformable base, std::vector<sf::Transformable>);
            Drawable(std::vector<sf::Transformable> components);
            ~Drawable();

        protected:
            sf::Transformable base;
            void (*position_setter)(int, int, bool);
            void (*position_setter)(sf::Vector2f, bool);
            
    };

};

#endif