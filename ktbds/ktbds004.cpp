#include <iostream>
#include <vector>
const int m=1e9;
using namespace std;

vector<int> fib;
int Count;
void khoi_tao() {
    fib.clear();
    fib.push_back(1);
    fib.push_back(2);
    int i = 2;
    while (fib[i - 1] + fib[i - 2] <= m) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
        i++;
    }
}

void thu(int n, int k, int index) {
    if(n==0&&k==0)Count++;
    else
        for(int i=index;i>=0&& fib[i]*k>=n;i--)
            if(n>=fib[i])thu(n-fib[i],k-1,i);
}

int main() {
    int t;
    cin >> t;
    khoi_tao();
    while (t--) {
        int n, k;
        cin>>n>>k;
        Count=0;
        thu(n,k,fib.size()-1);
        cout<<Count<<"\n";
    }

    return 0;
}