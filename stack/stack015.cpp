
#include <iostream>
#include <stack>
#include <string>

std::string removeKdigits(std::string num, int k) {
    std::stack<char> stack;
    
    for (char c : num) {
        while (k > 0 && !stack.empty() && stack.top() > c) {
            stack.pop();
            k--;
        }
        stack.push(c);
    }
    
    while (k > 0 && !stack.empty()) {
        stack.pop();
        k--;
    }
    
    std::string result;
    while (!stack.empty()) {
        result = stack.top() + result;
        stack.pop();
    }
    
    // Xóa các số 0 không cần thiết ở đầu
    int leadingZeros = 0;
    while (leadingZeros < result.length() && result[leadingZeros] == '0') {
        leadingZeros++;
    }
    result.erase(0, leadingZeros);
    
    return result.empty() ? "0" : result;
}

int main() {
    int T;
    std::cin >> T;
    
    for (int i = 0; i < T; ++i) {
        std::string num;
        int k;
        std::cin >> num >> k;
        std::string smallestNum = removeKdigits(num, k);
        std::cout << smallestNum << std::endl;
    }
    
    return 0;
}