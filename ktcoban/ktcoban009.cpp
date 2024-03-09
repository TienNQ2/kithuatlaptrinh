#include<bits/stdc++.h>
using namespace std;
long long demSoChuSo(string s){
    long long count =0;
    for(long long i=0;i<=s.size();i++){
        if(s[i]>='0'&&s[i]<='9')
            count++;
    }
 	return count;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        cin>>s;
        cout<<demSoChuSo(s)<<endl;
    }
}