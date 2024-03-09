#include <iostream>
#include <string>

std::string AddLargeNumbers(const std::string& num1, const std::string& num2) {
    int carry = 0; 
    std::string result;

    int i = num1.length() - 1;
    int j = num2.length() - 1;

    
    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        int digit = sum % 10;

       
        result.insert(result.begin(), digit + '0');

        i--;
        j--;
    }

    return result;
}

int main() {
	int t;
	std::cin>>t;
	std::cin.ignore();
	while(t--){
		
    std::string number1;
    std::string number2;
    std::cin>>number1>>number2;
  
    std::string result = AddLargeNumbers(number1, number2);

   
    std::cout << result << std::endl;
	}

    return 0;
}