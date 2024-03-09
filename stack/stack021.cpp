
#include <iostream>
#include <stack>
#include <vector>
#include <string>

int calPoints(std::vector<std::string>& ops) {
    std::stack<int> scores;
    int sum = 0;

    for (const std::string& op : ops) {
        if (op == "C") {
            sum -= scores.top();
            scores.pop();
        } else if (op == "D") {
            int lastScore = scores.top();
            int newScore = lastScore * 2;
            sum += newScore;
            scores.push(newScore);
        } else if (op == "+") {
            int lastScore = scores.top();
            scores.pop();
            int secondLastScore = scores.top();
            int newScore = lastScore + secondLastScore;
            sum += newScore;
            scores.push(lastScore);
            scores.push(newScore);
        } else {
            int newScore = std::stoi(op);
            sum += newScore;
            scores.push(newScore);
        }
    }

    return sum;
}

std::vector<std::string> splitString(const std::string& input, char delimiter) {
    std::vector<std::string> result;
    std::string temp;
    for (char c : input) {
        if (c == delimiter) {
            result.push_back(temp);
            temp = "";
        } else {
            temp += c;
        }
    }
    result.push_back(temp);
    return result;
}

int main() {
    int testCases;
    std::cin >> testCases;
    std::cin.ignore();

    for (int i = 0; i < testCases; i++) {
        std::string input;
        std::getline(std::cin, input);
        std::vector<std::string> ops = splitString(input, ',');

        int result = calPoints(ops);
        std::cout << result << std::endl;
    }

    return 0;
}