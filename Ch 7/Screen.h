// Write your own version of the Screen class.
#include <string>
#include <iostream>

class Screen {
    friend class Window_mgr;
private:
    unsigned width, height;
    std::string contents;
public:
    unsigned x = 0, y = 0;
    Screen();
    Screen(unsigned width, unsigned height);
    Screen(unsigned width, unsigned height, char c);
    unsigned getArea() const;
    Screen& move(unsigned x, unsigned y);
    Screen& set(char c);
    void display(std::ostream &os);
};

Screen::Screen() {
    width = 0;
    height = 0;
    contents = "";
}

Screen::Screen(unsigned width, unsigned height): width(width), height(height), contents(width*height, ' '){}

Screen::Screen(unsigned width, unsigned height, char c): width(width), height(height), contents(width*height, c){}

unsigned Screen::getArea() const {
    return width*height;
}

Screen& Screen::move(unsigned pos_y, unsigned pos_x) {
    y = pos_y; x = pos_x;
    return *this;
}

Screen& Screen::set(char c) {
    contents[y*width+x] = c;
    return *this;
}

void Screen::display(std::ostream &os) {
    for (std::size_t i = 0; i < contents.size(); ++i) {
        if ((i%width) == 0) {
            os << std::endl;
        }
        os << contents[i];
    }
}