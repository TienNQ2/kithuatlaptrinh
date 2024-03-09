#include <iostream>
using namespace std;
bool isPerfectNumber(long long num) {
    if (num <= 1) {
        return false; 
    }
    
    long long sum = 1; 
    
    for (long long i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i * i != num) {
                
                sum += num / i;
            }
        }
    }
    
    return sum == num;
}

int main() {
    int t;
    cin>>t;
    while(t--){
     	long long n;
        cin>>n;
        if(isPerfectNumber(n))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}