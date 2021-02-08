/**
 * Write a function that takes a forward_list<string> and
 * two additional string arguments. The function should find the first string
 * and insert the second immediately following the first. If the first string is
 * not found, then insert the second string at the end of the list.
 */

#include <forward_list>
#include <string>

void foo(std::forward_list<std::string> &fwLst, const std::string str1, const std::string str2);

int main() {
    std::forward_list<std::string> fwLst = {
        "blah",
        "sup",
        "wut",
        "huh",
        "da fk",
        "cringe"
    };

    foo(fwLst, "wut", "here");

    return 0;
}

void foo(std::forward_list<std::string> &fwLst, const std::string str1, const std::string str2) {
    auto indToInsert = fwLst.end();
    for(auto it = fwLst.begin(); it != fwLst.end(); ++it) {
        if(*it == str1) {
            indToInsert = it;
            break;
        }
    }

    fwLst.insert_after(indToInsert, str2);
}