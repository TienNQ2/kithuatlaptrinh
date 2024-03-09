#include <iostream>
using namespace std;
long long demChuSo0(long long n) {
    long long count = 0;
    for (long long i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }
    return count;
}


long long  timMNhoNhat(long long n)
 {
    long long l = 0;
    long long r = n * 5;

    while (l < r) {
        long long mid = (l + r) / 2;
        long long dem = demChuSo0(mid);

        if (dem < n) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }

    return l;
}

int main() {
	int t;
	cin>>t;
	while(t--){
    long long n;
    cin >> n;

    long long m = timMNhoNhat(n);

    cout << m << endl;
	}
    return 0;
}