#include "../../include/text.h"

using namespace JDK;

Text::Text(std::string fontPath)
{
    textFont.loadFromFile(fontPath);
    this->setFont(textFont);
}

Text::Text(const sf::String &string, std::string fontPath, unsigned int characterSize)
{

    textFont.loadFromFile(fontPath);
    this->setFont(textFont);

    this->setString(string);
    this->setCharacterSize(characterSize);
}

Text::~Text()
{

}