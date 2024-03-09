#include<bits/stdc++.h>
using namespace std;
bool nto(long long n){
    if(n==0||n==1)
        return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}
 int main(){
     int t;
     cin>>t;
     while(t--){
         long long n;
         cin>>n; 
         long long count=0;
         if(nto(n)==true)
         count=1;
         for(int i=2;i<=sqrt(n);i++){
         	if(n%i==0){
         		if(nto(i)==true)
         			count++;
         		if(nto(n/i)==true&&i!=(n/i))
         			count++;
			 }
		 }
         cout<<count<<endl;
     }
 }