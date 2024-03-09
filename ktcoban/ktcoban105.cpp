#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

long long minTimeToConnect(int a, vector<long long> lengths)
{
    long long time = 0;

    while (lengths.size() > 1)
    {

        sort(lengths.begin(), lengths.end());
        long long shortest_1 = lengths[0];
        long long shortest_2 = lengths[1];

        time += (shortest_1 + shortest_2) ;
        lengths.erase(lengths.begin(), lengths.begin() + 2);
        lengths.push_back(shortest_1 + shortest_2);
    }

    return time ;
}
int main()
{
    int N;
    cin >> N ;
    for (int i = 1; i <= N; ++i)
    {
        int a;
        cin>>a;
        vector<long long> lengths(a);
        for (int i = 0; i < a; ++i)
        {
            cin >> lengths[i];
        }

        long long result = minTimeToConnect(a, lengths);
        cout << result << "\n";
    }

    return 0;
}