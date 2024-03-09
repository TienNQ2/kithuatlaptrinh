#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(string a, string b) {
    return a + b > b + a;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<string> numbers(n);

        for (int i = 0; i < n; ++i) {
            cin >> numbers[i];
        }

        sort(numbers.begin(), numbers.end(), compare);

        string result = "";
        for (int i = 0; i < n; ++i) {
            result += numbers[i];
        }

        cout << result << endl;
    }

    return 0;
}
