#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1000100;


int a[N],pref[N];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d;
    cin>>n>>d;
    pref[0]=0;
    for (int i = 1; i <= n; ++i)
    {
        cin>>a[i];
        pref[i]=pref[i-1]+a[i];
    }
    int rs=0;
    for (int i = 1; i <= n; ++i)
    {
        if(a[i]==d)
            rs++;
        for (int j = i+1; j <= n; ++j)
        {
            int soma1,soma2;
            
            soma1=pref[j]-pref[i-1];

            soma2=pref[i];
            soma2 = soma2 + pref[n]-pref[j-1];
            
            if(soma1==d)
                rs++;
            if(soma2==d)
                rs++;
        }
    }
    cout<<rs<<"\n";
    return 0;
}