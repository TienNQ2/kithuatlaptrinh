#include<bits/stdc++.h>
using namespace std;
vector<int> snt(100001,1);
long long test (int l,int r)
{
    long long res=0;
    snt[1]=0;
    snt[0]=0;
    for(int i=0;i*i <= 100000;i++)
    {
        if(snt[i]==1)
        {
            for(int j = i*i;j<=100000;j+=i)
            {
                snt[j]=0;
            }
        }
    }
    for(int i=l;i<=r;i++)
    {
        if(snt[i]==1)
        {
            res+=i;
        }
    }
   return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
      int l,r;
      cin >> l >> r;
      long long kq = test(l,r);
      cout << kq << endl;
    }
    return 0;
}
