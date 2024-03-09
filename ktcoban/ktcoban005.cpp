#include <iostream>

const long long MOD = 1000000007; // MOD = 10^9 + 7

long long power_mod(long long coSo, long long soMu,long long mod) {
    long long result = 1;
    coSo %= mod;
    while (soMu > 0) {
        if (soMu % 2 == 1) {
            result = (result * coSo) % mod;
        }
        soMu /= 2;
        coSo = (coSo * coSo) % mod;
    }
    return result;
}

int main() {
	int t;
	std::cin>>t;
	while(t--){
    std::string a_str, b_str;
    
    std::cin >> a_str;
    
    std::cin >> b_str;

    long long a = 0;
    long long b = 0;

    
    for (char c : a_str) {
        a = (a * 10 + (c - '0')) % MOD;
    }

    for (char c : b_str) {
        b = (b * 10 + (c - '0')) % (MOD - 1); 
    }

    long long x = power_mod(a, b, MOD);
    std::cout <<  x << std::endl;
}
    return 0;
}