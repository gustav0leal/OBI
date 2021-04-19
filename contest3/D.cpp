#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, s, saldo, minSaldo;
	cin >> n >> saldo;
	minSaldo = saldo;
	for (int i = 0; i < n; i++){
		cin >> s;
		saldo += s;
		minSaldo = min(minSaldo, saldo);
	}
	cout << minSaldo << "\n";
	return 0;
}