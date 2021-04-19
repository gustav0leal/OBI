#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N=510;

string s[N];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; ++i)
    {
    	cin>>s[i];
    }
    for (int i = 0; i < n-1; ++i)
    {
    	for (int j = 0; j < m; ++j)
    	{
    		if(s[i][j]=='o')
    		{
    			if(s[i+1][j]=='.')
    			{
    				s[i+1][j]='o';
    			}else if(s[i+1][j]=='#' && j!=m-1 )
    			{
    				s[i][j+1]='o';
    			}
    		}
    	}
    	for (int j = m-1; j >=0; --j)
    	{
    		if(s[i][j]=='o')
    		{
    			if(s[i+1][j]=='.')
    			{
    				s[i+1][j]='o';
    			}else if(s[i+1][j]=='#' && j!=0 )
    			{
    				s[i][j-1]='o';
    			}
    		}
    	}
    }
    for (int i = 0; i < n; ++i)
    {
    	cout<<s[i]<<"\n";
    }
    return 0;
}

