#include<bits/stdc++.h>

using namespace std;

bool ngto (long long n)
{
    if(n==2||n==3) return true;
    if(n==1) return false;
    if(n%2==0||n%3==0) return false;
    for (int i=5;i<=sqrt(n);i+=6)
    {
        if(n%i==0||n%(i+2)==0)
            return false;
    }
    return true;
}
long long check (long long n)
{
    if(n<=4)
        return 5;
    if(n%2==0)
        n++;
    while(!ngto(n)||!ngto(n-2))
    {
        n=n+2;
    }
    return n;
}


main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        cout << check(n) << endl;

    }
}