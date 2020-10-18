#ifndef WINDOW_H
#define WINDOW_H

#include <SFML/Graphics/RenderWindow.hpp>
#include "throttle.hpp"
#include "speedometer.hpp"

namespace JDK
{

    class Window : public sf::RenderWindow
    {

    public:
        Window(); //Create window
        Window(sf::VideoMode mode, const sf::String &title, sf::Uint32 style=sf::Style::Default, const sf::ContextSettings &settings=sf::ContextSettings()); //Create window with mode, title, style, and context settings
        ~Window();

        void drawJDK(JDK::Throttle item); //Draw JDK::Throttle
        void drawJDK(Speedometer item); //Draw Speedometer
        
    private:
        //std::vector<sf::Drawable> toPrint;
    };

}

#endif