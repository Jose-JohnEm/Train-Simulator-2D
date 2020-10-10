#ifndef NUMBER_H
#define NUMBER_H

#include "text.hpp"

namespace JDK
{

    class Number : public JDK::Text
    {
        public:
            Number();
            Number(std::string fontPath);
            Number(int value, std::string fontPath, unsigned int characterSize = 30);
            Number(const sf::String &value, std::string fontPath, unsigned int characterSize = 30);
            ~Number();

            void setValue(int value);
            void setValue(std::string value);

            void add(int value);

            int getValue();
            std::string getValueStr();

        private:
            int value;
    };

};

#endif