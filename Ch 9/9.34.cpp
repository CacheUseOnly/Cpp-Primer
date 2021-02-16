/**
 * Assuming vi is a container of ints that includes even and
 * odd values, predict the behavior of the following loop. After you’ve analyzed
 * this loop, write a program to test whether your expectations were correct.
 */

// iter = vi.begin();
// while (iter != vi.end())
//     if (*iter % 2)
//         iter = vi.insert(iter, *iter);
//     ++iter;

// It traverses through the vi and duplicates odd elements

#include <vector>

int main() {
    std::vector<int> vi = {3, 5, 7, 2, 1, 8, 9, 13, 16, 18};
    auto iter = vi.begin();

    while (iter != vi.end()) {
        if (*iter % 2)
            iter = vi.insert(iter, *iter);
        ++iter;
    }

    return 0;
}