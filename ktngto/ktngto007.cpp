#include <iostream>
using namespace std;
bool check(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int timNTo(int L, int R) {
    for (int num = R; num >= L; --num) {
        if (check(num)) {
            return num;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int k = timNTo(l,r);
        int dem=2;
        while(k*dem<=r){
            
            dem++;
        }
        cout<<k*(dem-1)<<endl;
    }
}