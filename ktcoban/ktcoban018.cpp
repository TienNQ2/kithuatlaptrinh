#include <iostream>

using namespace std;

long long timSo(long long n) {
    long long k = 0;
    while (n >= 2) {
        n /= 2;
        k += n;
    }
    return k;
}

int main() {
	int t;
	cin>>t;
	while(t--){
    long long n;
    cin >> n;

    long long  result = timSo(n);
    cout << result <<  endl;
	}
    return 0;
}