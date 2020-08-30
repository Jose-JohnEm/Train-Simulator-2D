#include "../../include/window.h"

JDK::Window::Window() : sf::RenderWindow()
{

}

JDK::Window::Window(sf::VideoMode mode, const sf::String &title, sf::Uint32 style, const sf::ContextSettings &settings)
: sf::RenderWindow(mode, title, style, settings)
{

}

JDK::Window::~Window()
{

}