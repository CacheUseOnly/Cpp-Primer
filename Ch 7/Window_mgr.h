/**
 * Define your own versions of Screen and Window_mgr in
 * which clear is a member of Window_mgr and a friend of Screen.
 */
#include <vector>
#include "Screen.h"

class Window_mgr {

    typedef std::vector<Screen>::size_type scrIndex;

private:
    std::vector<Screen> scrVec;
public:
    void clear(scrIndex index);
};

void Window_mgr::clear(scrIndex index) {
    Screen &temp = scrVec[index];
    temp.contents = (temp.width*temp.height, ' ');
}