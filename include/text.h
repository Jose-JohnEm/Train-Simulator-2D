#ifndef TEXT_H
#define TEXT_H

#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>

#include <map>

namespace JDK
{
    const std::string FONT_PATH = "Others/fonts/";

    namespace STYLE
    {
        const std::string TITLE = "bla";
        const std::string LCD = "FakeHope.ttf";
        const std::string LATO = "Lato-Black.ttf";
    };


    class Text : public sf::Text
    {
        public:
            Text();
            Text(std::string fontPath);
            Text(const sf::String &string, std::string fontPath, unsigned int characterSize = 30);
            ~Text();

            void setFontPath(std::string fontpath);

        private:
            sf::Font textFont;
    };
};

#endif