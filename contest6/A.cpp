#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int a[N],d[N];
int main()
{
	int n,k;
	while(cin>>n>>k)
	{
		for (int i = 1; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n-1; ++i)
		{
			d[i]=(a[i+1]-a[i]);
		}
		sort(d,d+n-1);
		int resp=0;
		for (int i = 0; i < n-k; ++i)
		{
			resp+=d[i];
		}
		cout<<resp<<"\n";
	}

}