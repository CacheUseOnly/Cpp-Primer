// Define your own version of Debug.

#include <string>

class Debug {
private:
    bool hw;
    bool sw;
    std::string errMsg;
public:
    Debug(bool hw, bool sw, std::string msg);
    Debug(bool hw, bool sw);
    Debug(std::string err);
    void setHw(bool hw);
    void setSw(bool sw);
    void printErrMsg();
    bool any();
};