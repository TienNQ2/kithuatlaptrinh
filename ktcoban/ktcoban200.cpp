#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long n;
    while(cin>>n){
    string result="";
    int dem=0;
    while(n!=0){
        if(n%26==0){
            result= char(n%26+26+64)+result;
            n=n/26-1;
        }
        else{
            result=char(n%26+64)+result;
            n/=26;
        }
    }
    cout<< result;
    cout<<endl;}
}