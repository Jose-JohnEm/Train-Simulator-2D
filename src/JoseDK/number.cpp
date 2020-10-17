#include "number.hpp"

using namespace JDK;

Number::Number() : Text()
{
    
}

Number::Number(std::string fontPath) : Text(fontPath)
{

}


Number::Number(int value, std::string fontPath, unsigned int characterSize)
: Text(fontPath)
{
    this->setCharacterSize(characterSize);

    this->setValue(value);
}


Number::Number(const sf::String &value, std::string fontPath, unsigned int characterSize)
: Text(value, fontPath, characterSize)
{
    this->setCharacterSize(characterSize);

    this->setValue(value);
}

Number::~Number()
{

}

void Number::setValue(int value)
{
    this->value = value;
    this->setString(std::to_string((int)value));
}

void Number::setValue(float value)
{
    this->value = value;
    this->setString(std::to_string((int)value));
}

void Number::setValue(std::string value)
{
    this->value = std::stoi(value);
    this->setString(value);
}

void Number::add(float val)
{
    this->value += val;
    this->setString(std::to_string((int)value));
}

int Number::getValue()
{
    return this->value;
}

std::string Number::getValueStr()
{
    return this->getString();
}