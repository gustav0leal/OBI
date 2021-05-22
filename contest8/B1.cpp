#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+10;
int vet[MAXN];

int main(){
	int n, total = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> vet[i];
	}

	for (int i = 0; i < n; i++){
		int maxA = 0, maxD = 0;
		for (int j = 0; j < i; j++){
			maxA = max(maxA, vet[j]);
		}
		for (int j = i+1; j < n; j++){
			maxD = max(maxD, vet[j]);
		}
		if (vet[i] < maxA && vet[i] < maxD)
			total++;
	}
	cout << total << "\n";
	return 0;
}