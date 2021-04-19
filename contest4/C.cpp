#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N=20100;
const ll mod=998244353LL;
int vet[N];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
    	cin>>vet[i];
    }
    int mark=0;
    for (int i = 0; i < n-1; ++i)
    {
    	if(vet[i+1]-vet[i]>8)
    		mark=1;
    }
    if(vet[0]>8)
    	mark=1;
    if(mark)
    	cout<<"N\n";
    else
    	cout<<"S\n";
    return 0;
}

