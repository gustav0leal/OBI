#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N=200100;
const ll mod=1e9+7LL;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	int n,ant;
	cin>>n>>ant;
	if(n==1)
	{
		cout<<"1\n";
		return 0;
	}
	int tipo,atual,rs=1,diff;
	cin>>atual;
	diff=atual-ant;
	ant=atual;
	n-=2;
	while(n--)
	{
		cin>>atual; 
		if(atual-ant!=diff)
			rs++;
		diff=atual-ant;
		ant=atual;
	}
	cout<<rs<<"\n";
    return 0;
}

