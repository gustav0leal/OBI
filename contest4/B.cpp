#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N=110;
const ll mod=998244353LL;

int vet[N];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,c,m;
    cin>>n>>c>>m;
    int resp=c;
    for (int i = 0; i < c; ++i)
    {
    	int x;
    	cin>>x;
    	vet[x]=1;
    }
    while(m--)
    {
    	int x;
    	cin>>x;
    	if(vet[x]==1)
    	{
    		resp--;
    		vet[x]=0;
    	}
    }
    cout<<resp<<"\n";
    return 0;
}

