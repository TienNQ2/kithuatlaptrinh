    #include<bits/stdc++.h>
    using namespace std;
    long long bdslt2(int n){
        long long dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        int i=0;

        while(pow(2,i)<=n){
            int power = pow(2,i);
            for(int j=power;j<=n;j++){
                dp[j]+=dp[j-power];
            }
            i++;
        }
        return dp[n];
    }
    int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            cout<<bdslt2(n)<<endl;
        }
    }