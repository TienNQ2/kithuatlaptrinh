#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<int> getDailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> result(n);

    for (int i = 0; i < n; i++) {
        int j = i + 1;
        while (j < n && temperatures[j] <= temperatures[i]) {
            j++;
        }

        if (j < n) {
            result[i] = j - i;
        } else {
            result[i] = 0;
        }
    }

    return result;
}

vector<int> strToVector(string input) {
    vector<int> result;
    stringstream ss(input);

    string num;
    while (getline(ss, num, ',')) {
        result.push_back(stoi(num));
    }

    return result;
}

string vectorToString(vector<int> input) {
    string result = "";
    for (int i = 0; i < input.size(); i++) {
        result += to_string(input[i]);
        if (i < input.size() - 1) {
            result += ",";
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Bỏ qua dòng new line sau khi đọc số lượng bộ test

    while (t--) {
        string input;
        getline(cin, input);

        vector<int> temperatures = strToVector(input);
        vector<int> result = getDailyTemperatures(temperatures);
        string output = vectorToString(result);

        cout << output << endl;
    }

    return 0;
}