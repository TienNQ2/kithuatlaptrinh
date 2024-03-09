#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long l, r;
        cin >> l >> r;
        for(int k = 40; k >= 1; k--){
            ll left = 0, right = (ll)(pow(r, 1.0 / k) + 10);
            while(left < right){				//Tim kiem nhi phan X thoa man X^k >= l
                ll mid = (left + right) / 2;	//Gia tri X do sau vong while luu vao left
                ll z = 1;
                for(int i = 0; i < k; i++){
                    z *= mid;
                    if(z >= l) break;
                }
                if(z >= l) right = mid;
                else left = mid + 1;
            }
            ll z = 1;
            for(int i = 0; i < k; i++){		//Sau khi tim dc gia tri left thoa man
                z *= left;					//Thuc hien luy thua den khi nao tim duoc k
                if(z > r) break;
            }
            if(l <= z && z <= r){
                cout << k << endl;
                break;
            }
        }
    }
    return 0;
}