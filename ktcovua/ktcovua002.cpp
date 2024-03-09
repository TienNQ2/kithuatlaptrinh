#include<bits/stdc++.h>
using namespace std;
int N,datHau[100],cot[100],cheoXuoi[100],cheoNguoc[100];
int cnt=0;
void Try(int i){
	for(int j=1;j<=N;j++){
		if(cot[j]==1&&cheoXuoi[i-j+N]==1&&cheoNguoc[i+j-1]==1){
			cot[j]=0;
			cheoXuoi[i-j+N] = 0;
			cheoNguoc[i+j-1] = 0;
			datHau[i] = j;
			if(i==N){
				cnt++;}
			else{
			Try(i+1);}
				cot[j]=1;
			cheoXuoi[i-j+N]=1;
			cheoNguoc[i+j-1]=1;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
	cin>>N;
	for(int i=1;i<=99;i++){
		cot[i]=1;
			cheoXuoi[i] = 1;
			cheoNguoc[i] = 1;
	}
	Try(1);
	cout<<cnt<<endl;
	cnt = 0;}
}