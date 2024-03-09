#include<bits/stdc++.h>
using namespace std;
int countNumber(long long l,long long r){
    if(l>r)
        swap(l,r);
    long long count;
    long long canL = sqrt(l);
    long long canR = sqrt(r);
    if(canL*canL == l&&canR*canR<r)
    	count = canR - canL +1 ;
    else 
        count = canR - canL;
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        cout<<countNumber(l,r)<<endl;
    }
}