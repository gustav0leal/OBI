#include <bits/stdc++.h>

using namespace std;

const int N = int(1e5) + 10;
string s[N];

int main(){
    int n;

    while(cin >> n){
        int save = 0;
        for(int i = 0 ; i < n ; i++){
            cin >> s[i];
        }

        sort(s, s + n);

        for(int i = 0 ; i < n ; i++){
            if(i > 0){
                for(int j = 0 ; j < s[i].length() ; j++){
                    if(s[i][j] == s[i - 1][j]){
                        save++;
                    }else{
                        break;
                    }
                }
            }
        }

        cout << save << "\n";
    }

    return 0;
}