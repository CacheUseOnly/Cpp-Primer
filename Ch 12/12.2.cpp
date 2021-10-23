/**
 * @file 12.2.cpp
 * @author Cache_use_only (luoyuxuan.carl@gmail.com)
 * @brief
 * Write your own version of the StrBlob class including the
 * const versions of front and back.
 * @version 0.1
 * @date 2021-10-23
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <memory>
#include <string>
#include <vector>

class StrBlob {
   public:
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);
    const int size();
    const bool empty();
    void push_back(const std::string& str);
    const std::string& front();
    const std::string& back();

   private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(int index, std::string msg);
};

StrBlob::StrBlob() : data(std::make_shared<std::vector<std::string>>()) {}
StrBlob::StrBlob(std::initializer_list<std::string> il)
    : data(std::make_shared<std::vector<std::string>>(il)) {}

const int StrBlob::size() { return data->size(); }
const bool StrBlob::empty() { return data->empty(); }
void StrBlob::push_back(const std::string& str) {
    check(0, "Pushing back to empty data");
    data->push_back(str);
}
const std::string& StrBlob::front() {
    check(0, "Retrieving front of empty data");
    return data->front();
}
const std::string& StrBlob::back() {
    check(0, "Retrieving back of empty data");
    return data->back();
}

void StrBlob::check(int index, const std::string msg) {
    if (index >= data->size()) {
        throw std::out_of_range(msg);
    }
}