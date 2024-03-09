#include<bits/stdc++.h>
using namespace std;
long long nto(long long n){
    if(n==0||n==1)
        return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
void demSo(long long n){
    long long dem[100001]={0};
    if(nto(n)==1)
        cout<<n<<" "<<1<<endl;
    else{
    	int max = 0;
    int vitri = 0;
    for(int i =2; i<=sqrt(n);i++){
        int count =0;
        if(n%i==0){
            while(n%i==0){
                count++;
                n/=i;
            }
        if(count>max){
        max = count;
		vitri = i;}
        }
    }
    
   cout<<vitri<<" "<<max<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
       demSo(n);
    }
}