#include "../../include/window.h"

using namespace JDK;

Window::Window() : sf::RenderWindow()
{

}

Window::Window(sf::VideoMode mode, const sf::String &title, sf::Uint32 style, const sf::ContextSettings &settings)
: sf::RenderWindow(mode, title, style, settings)
{

}

Window::~Window()
{

}

void Window::drawJDK(JDK::Throttle item)
{
    draw(item.getButton());
    draw(item.getTige());
    draw(item.getNumber());
}

void Window::drawJDK(Speedometer item)
{
    drawJDK(item.throttle);
    drawJDK();
}