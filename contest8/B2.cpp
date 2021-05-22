#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+10;
int vet[MAXN];
int sufMax[MAXN];

// 1 3 4 2 3
// 4 4 4 3 3

int main(){
	int n, total = 0, prefixo = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> vet[i];
	}

	sufMax[n-1] = vet[n-1];
	for (int i = n-2; i >= 0; i--){
		sufMax[i] = max(sufMax[i+1], vet[i]);
	}

	for (int i = 0; i < n; i++){
		if (prefixo > vet[i] && sufMax[i] > vet[i])
			total++;

		prefixo = max(prefixo, vet[i]);
	}
	cout << total << "\n";
	return 0;
}