#include<bits/stdc++.h>

using namespace std;

main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        map<long long ,long long> mp;
        while(n%2==0)
        {
            mp[2]++;
            n/=2;
        }
        for(int i=3 ; i<= sqrt(n);i+=2)
        {
            if(n%i==0)
            {
                while(n%i==0)
                {
                    mp[i]++;
                    n=n/i;
                }
            }
        }
        if(n>1) mp[n]=1;
        cout << mp.size() << endl;
        for(auto it : mp)
        {
            cout << it.first << " " << it.second << endl;
        }

    }
}
