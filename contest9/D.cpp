#include <bits/stdc++.h>

using namespace std;

const int N = 256;
int cnta[N], cntb[N];

int main(){
    string a, b;

    cin >> a >> b;

    for(int i = 0 ; i < a.length() ; i++){
        cnta[a[i]]++;
    }

    for(int i = 0 ; i < b.length() ; i++){
        if(b[i] != '*'){
            cntb[b[i]]++;
        }
    }

    for(char a = 'a' ; a <= 'z' ; a++){
        if(cnta[a] < cntb[a]){
            cout << "N\n";
            return 0;
        }
    }

    cout << "S\n";

    return 0;
}