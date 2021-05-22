#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=210;


int a[N];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d;
    cin>>n>>d;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    int rs=0;
    for (int i = 0; i < n; ++i)
    {
        if(a[i]==d)
            rs++;
        for (int j = i+1; j < n; ++j)
        {
            int soma1,soma2;
            soma1=soma2=0;
            for (int c = i; c <= j; ++c)
            {
                soma1+=a[c];
            }
            for (int c = 0; c <= i; ++c)
            {
                soma2+=a[c];
            }
            for (int c = j; c < n; ++c)
            {
                soma2+=a[c];
            }
            if(soma1==d)
                rs++;
            if(soma2==d)
                rs++;
        }
    }
    cout<<rs<<"\n";
    return 0;
}