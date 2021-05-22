#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, cont = 0;
	string s;
	cin >> n;
	cin.ignore();
	while(n--){
		getline(cin, s);
		for (int i = 0; i < s.size(); i++){
			if (s[i] == '{') cont++;
			else if (s[i] == '}'){
				cont--;
				if (cont < 0){
					cout << "N\n";
					return 0;
				}
			}
		}
	}
	if (cont > 0) cout << "N\n";
	else cout << "S\n";
	return 0;
}