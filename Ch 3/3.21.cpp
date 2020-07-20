//  Redo the first exercise from § 3.3.3 (p. 105) using iterators

#include <iostream>
#include <vector>

using namespace std;

constexpr int COUNT = 9;

int ex_3_16() {
    vector<int> v1;                 // empty
    vector<int> v2(10);             // ten uninitialized int
    vector<int> v3(10, 42);         // ten '42'
    vector<int> v4{10};             // '10'
    vector<int> v5{10, 42};         // '10', '42'
    vector<string> v6{10};          // ten uninitialized string
    vector<string> v7{10, "hi"};    // ten "hi" strings

    std::cout << "Size of v1: " << v1.size() << std::endl;
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
        std::cout << *it << ", ";
    }
    std::cout << "\nSize of v2: " << v2.size() << std::endl;
    for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++) {
        std::cout << *it << ", ";
    }
    std::cout << "\nSize of v3: " << v3.size() << std::endl;
    for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++) {
        std::cout << *it << ", ";
    }
    std::cout << "\nSize of v4: " << v4.size() << std::endl;
    for (vector<int>::iterator it = v4.begin(); it != v4.end(); it++) {
        std::cout << *it << ", ";
    }
    std::cout << "\nSize of v5: " << v5.size() << std::endl;
    for (vector<int>::iterator it = v5.begin(); it != v5.end(); it++) {
        std::cout << *it << ", ";
    }
    std::cout << "\nSize of v6: " << v6.size() << std::endl;
    for (vector<string>::iterator it = v6.begin(); it != v6.end(); it++) {
        std::cout << *it << ", ";
    }
    std::cout << "\nSize of v7: " << v7.size() << std::endl;
    for (vector<string>::iterator it = v7.begin(); it != v7.end(); it++) {
        std::cout << *it << ", ";
    }

    return 0;
}

int ex_3_17 () {
    vector<string> vec;
    string buffer;

    for (int i = 0; i < 17; i++) {
        std::cout << "Please input words: ";
        getline(cin, buffer);
        vec.push_back(buffer);
    }

    for (vector<string>::iterator it = vec.begin(); it != vec.end(); it++) {
        for (string::iterator cit = it->begin(); cit != (*it).end(); cit++) {
            (*cit) = toupper((*cit));
        }
    }

    for (vector<string>::iterator it = vec.begin(); it != vec.end(); it++) {
        cout << (*it) << " ";
        if ((it - vec.begin() + 1)%8 == 0) {
            cout << endl;
        }
    }

    return 0;
}

int ex_3_19() {
    std::vector<int> ivec1(10, 42);
    std::vector<int> ivec2 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    std::vector<int> ivec3;
    for (int i = 0; i < 10; i++) {
        ivec3.push_back(42);
    }

    return 0;
}

int ex_3_20() {
    vector<int> ivec, isumVec, isumVec2;
    int buffer;

    for(int i = 0; i < COUNT; i++) {
        cout << "Please input number " << i + 1 << ": ";
        cin >> buffer;
        ivec.push_back(buffer);
    }

    for(vector<int>::iterator it = ivec.begin(); it != ivec.end(); it++) {
        isumVec.push_back((*it) + (*next(it, 1)));
    }
    cout << "Sum: ";
    for(vector<int>::iterator it = isumVec.begin(); it != isumVec.end(); it++) {
        cout << (*it) << " ";
    }
    cout << endl;

    for(vector<int>::iterator i = ivec.begin(), j = ivec.end() - 1; j >= i; i++, j--) {
        //buffer = ivec[i] + ivec[j];
        //cout << "i: " << i << " j: " << j << " buffer: " << buffer << endl;
        isumVec2.push_back((*i) + (*j));
    }
    cout << "Sum: ";
    for(vector<int>::iterator it = isumVec2.begin(); it != isumVec2.end(); it++) {
        cout << (*it) << " ";
    }
    cout << endl;

    return 0;
}

int main() {
    cout << "---- Running exercise 3.16 ----\n";
    ex_3_16();
    cout << "\n---- Running exercise 3.17 ----\n";
    ex_3_17();
    cout << "\n---- Running exercise 3.19 ----\n";
    ex_3_19();
    cout << "\n---- Running exercise 3.20 ----\n";
    ex_3_20();

    return 0;
}