#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, qtdNotas;
	vector<int> valores = {100, 50, 20, 10, 5, 2, 1};
	cin >> N;

	cout << N << "\n";
	for (int i = 0; i < valores.size(); i++){
		qtdNotas = N / valores[i];
		N -= valores[i] * qtdNotas;
		cout << qtdNotas << " nota(s) de R$ " << valores[i] << ",00\n";
	}
	return 0;
}