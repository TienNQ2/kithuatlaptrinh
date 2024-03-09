#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int i=1;
        long long dem5=0;
        while(pow(5,i)<=n){
        	dem5= dem5+ n/pow(5,i);
        	i++;
		}
		cout<<dem5<<endl;
    }
}