/**
 * In the second version of error_msg that has an ErrCode
 * parameter, what is the type of elem in the for loop?
 */

/**
 * The type is: const std::string &
 */


#include <initializer_list>
#include <iostream>
#include <system_error>

using namespace std;

void error_msg(ErrCode e, initializer_list<string> il)
{
    cout << e.msg() << ": ";
    for (const auto &elem : il)
        cout << elem << " " ;
    cout << endl;
}