#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N=2100;
const ll mod=998244353LL;
int vet[N];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,l,r;
    cin>>n>>l>>r;
    for (int i = 0; i < n; ++i)
    {
    	cin>>vet[i];
    }
    int resp=0;
    for (int i = 0; i < n-1 ; ++i)
    {
    	for (int j = i+1; j < n; ++j)
    	{
    		if(vet[i]+vet[j]<=r && vet[i]+vet[j]>=l)
    			resp++;
    	}
    }
    cout<<resp<<"\n";
    return 0;
}

