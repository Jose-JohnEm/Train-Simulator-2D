#ifndef WINDOW_H
#define WINDOW_H

#include <SFML/Graphics/RenderWindow.hpp>
#include "throttle.h"

namespace JDK
{

    class Window : public sf::RenderWindow
    {

    public:
        Window();
        Window(sf::VideoMode mode, const sf::String &title, sf::Uint32 style=sf::Style::Default, const sf::ContextSettings &settings=sf::ContextSettings());
        ~Window();

        void drawJDK(JDK::Throttle item);
        
    private:
        std::vector<sf::Drawable> toPrint;
    };

}

#endif