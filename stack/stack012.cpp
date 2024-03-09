#include <iostream>
#include <stack>
#include <string>
using namespace std;

string smallestNumberFromPattern(string pattern) {
    int n = pattern.length();
    string result;
    stack<int> s;

    for (int i = 0; i <= n; ++i) {
        s.push(i + 1);
        if (i == n || pattern[i] == 'I') {
            while (!s.empty()) {
                result += to_string(s.top());
                s.pop();
            }
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pattern;
        cin >> pattern;
        cout << smallestNumberFromPattern(pattern) << endl;
    }
    return 0;
}