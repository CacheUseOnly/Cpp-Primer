/**
 * Use a stack to process parenthesized expressions. When
 * you see an open parenthesis, note that it was seen. When you see a close
 * parenthesis after an open parenthesis, pop elements down to and including
 * the open parenthesis off the stack. push a value onto the stack to
 * indicate that a parenthesized expression was replaced.
 */
#include <iostream>
#include <stack>
#include <string>

std::string replace(std::stack<char> &stk) {
    stk.pop();

    unsigned count = 0;
    while (!stk.empty()) {
        if (stk.top() == '(') {
            stk.pop();
            stk.push(count);
            return std::to_string(count);
        } else if (stk.top() == ')') {
            replace(stk);
        }

        stk.pop();
        count++;
    }
}

int main() {
    std::string input{"((here) is my test) (input) haha."};

    std::stack<char> stk;
    unsigned seen = 0;

    for (auto &c : input) {
        if (c == '(') {
            seen++;
        } else if (c == ')') {
            seen--;
            if (seen == 0) {
                stk.push(c);
            }
        }

        if (seen > 0) {
            stk.push(c);
        }
    }

    std::string output;
    while(!stk.empty()) {
        if (stk.top() == ')') {
            output.append(replace(stk));
            output += " ";
            continue;
        }

        stk.pop();
    }

    std::cout << output << std::endl;

    return 0;
}