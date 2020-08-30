#ifndef WINDOW_H
#define WINDOW_H

#include <SFML/Graphics/RenderWindow.hpp>


namespace JDK
{

    class Window : public sf::RenderWindow
    {

    public:
        Window();
        Window(sf::VideoMode mode, const sf::String &title, sf::Uint32 style=sf::Style::Default, const sf::ContextSettings &settings=sf::ContextSettings());
        ~Window();

    private:
        //void draw(/*My Shape*/);
        
    };

}

#endif