#include <bits/stdc++.h>
using namespace std;

vector<int> casas;

int buscaBinaria(int valor){
	int l = 0, r = casas.size()-1, mid;	
	while(l <= r){
		mid = (l + r) / 2;
		if (casas[mid] == valor)
			return mid;
		else if (casas[mid] > valor)
			r = mid-1;
		else
			l = mid+1;
	}
	return -1; //nunca
}

int main(){
	int n, m, in, idxAtual, idxUlt;
	int dist = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> in;
		casas.push_back(in);
	}
	idxUlt = 0;
	while(m--){
		cin >> in;
		idxAtual = buscaBinaria(in);
		dist += abs(idxAtual - idxUlt);
		idxUlt = idxAtual;
	}
	cout << dist << endl;
	return 0;
}