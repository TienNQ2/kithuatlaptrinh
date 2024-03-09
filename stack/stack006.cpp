#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        string res = "";
        stack<char> stk;
        for(char c : s)
        {
            if(c!= '*')
            {
                stk.push(c);
            }
            else if(!stk.empty())
            {
                stk.pop();
            }
        }
        while(!stk.empty())
        {
            res = stk.top()+res;
            stk.pop();
        }
        cout << res << endl;
    }
}
