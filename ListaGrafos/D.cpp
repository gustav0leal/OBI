#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ll n,m,rs;
	cin>>n>>m;
	rs=0;
	for (ll i = 1; i <= m ; ++i)
	{
		ll l,r;
		l=max(1LL,n-m-i);
		r=min(m,n-i-1LL);
		if(l<=r){
			// cout<<i<<" "<<l<<" "<<r<<"\n";
			rs+=r-l+1LL;
		}
	}
	cout<<rs<<"\n";
	return 0;
}