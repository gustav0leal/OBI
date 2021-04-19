#include<bits/stdc++.h>

using namespace std;

typedef long long ll;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int l,c;
    cin>>l>>c;
    cout<<(c-1)*(l-1) + (c)*(l)<<"\n";
    cout<<2*(c-1)+2*(l-1)<<"\n";
    return 0;
}

