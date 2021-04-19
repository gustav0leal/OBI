#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N=200100;
const ll mod=1e9+7LL;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    int rs=0,last,atual;
    cin>>n>>m;
    cin>>last;
    n--;
    while(n--)
    {
    	rs+=abs(last-m);
    	cin>>atual;
    	atual+=m-last;
    	last=atual;
    }
    cout<<rs<<"\n";
    return 0;
}

