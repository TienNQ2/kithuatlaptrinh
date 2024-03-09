#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        long a, b;
        cin >> a >> b;

        long s = 0;
        s = ((a + b)*(b - a + 1))/2;
        
        cout << s << endl;
    }
}