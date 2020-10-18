#ifndef NUMBER_H
#define NUMBER_H

#include "text.hpp"

namespace JDK
{

    class Number : public JDK::Text
    {
        public:
            Number();   //Create the printable number
            Number(std::string fontPath); //Create the number and set stylefont
            Number(int value, std::string fontPath, unsigned int characterSize = 30); //Create the number, set value, stylefont and size
            Number(const sf::String &value, std::string fontPath, unsigned int characterSize = 30); //Create the number, set value from string, stylefont and size
            ~Number();

            void setValue(float value); //Set float value to the number
            void setValue(int value); //Set int value to the number
            void setValue(std::string value); //Set float value from string to the number

            void add(float value); //Append value to number

            int getValue(); //Returns value
            std::string getValueStr(); //Returns value into string

        private:
            float value;
    };

};

#endif