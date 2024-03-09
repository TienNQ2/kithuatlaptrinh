#include<iostream>
#include<cmath>
#include<cstring>
void nto(int l,int r){
	bool dp[r+1];
	int count =0;
	memset(dp,true,sizeof(dp));
    dp[1]=false;
	for(int i=2;i<=r;i++){
		if(dp[i]==true){
		for(int j=i+i;j<=r;j+=i)
		dp[j]=false;}
	}
	for(int i=l;i<=r;i++){
		if(dp[i]==true){
			
		count++;}
	}
	std::cout<<count<<std::endl;
}
 int main(){
     int t;
     std::cin>>t;
     while(t--){
         int l,r;
         std::cin>>l>>r; 
         nto(l,r);
     }
 }