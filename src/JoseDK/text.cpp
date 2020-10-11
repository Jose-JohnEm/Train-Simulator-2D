#include "text.hpp"

using namespace JDK;

Text::Text() : sf::Text()
{

}

Text::Text(std::string fontPath) : sf::Text()
{
    setFontPath(fontPath);
}

Text::Text(const sf::String &string, std::string fontPath, unsigned int characterSize)
: sf::Text()
{
    setFontPath(fontPath);

    this->setString(string);
    this->setCharacterSize(characterSize);
}

Text::~Text()
{

}

void Text::setFontPath(std::string fontPath)
{
    textFont.loadFromFile(FONT_PATH + fontPath);
    this->setFont(textFont);
}