#include <iostream>
using namespace std;
bool prime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
long long check(long long n){
    if(prime(n)) return n;
    for(long long i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
                if(prime(n)==true)
                    return n;
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<check(n)<<endl;
    }
}
