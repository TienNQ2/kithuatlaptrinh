#include <bits/stdc++.h>
using namespace std;

int check (int k, int s)
{
	int cout;
	if(3*k==s) return 1;
	for(int i=0; i<=k;i++)
	{
		int y_va_z =min(k,s-i);
		for(int j=0;j<=y_va_z;j++)
		{
			int z = s- i - j;
			if(z<=k) cout ++;
		}

	}
	return cout;
}
int main() 
{
    int test;
	cin >> test;
	while(test--)
	{
		int k, s;
		cin >> k >> s;
		cout << check(k, s) << endl;
	}
	return 0;
}