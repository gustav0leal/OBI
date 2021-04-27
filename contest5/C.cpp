#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, test = 1, ingresso, premiado;
	while(cin >> n, n){
		for (int i = 1; i <= n; i++){
			cin >> ingresso;
			if (ingresso == i)
				premiado = i;
		}
		cout << "Teste " << test << "\n";
		cout << premiado << "\n";
		cout << "\n";
		test++;
	}
	return 0;
}