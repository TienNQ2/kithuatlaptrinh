#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        if(k%2==0){
            long long tong =9*pow(10,(k/2)-1);
			cout<<tong<<endl;}
        else{
            long long tong =9*pow(10,((k)/2));
			cout<<tong<<endl;}
    }
}