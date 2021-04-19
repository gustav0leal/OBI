#include <bits/stdc++.h>
using namespace std;

int main(){
	int F, R, pos, resposta;
	vector<int> posicoes;
	cin >> F >> R;
	for (int i = 0; i < R; i++){
		cin >> pos;
		posicoes.push_back(pos-1);
	}
	resposta = posicoes[0]; //comprimento em branco no início
	resposta = max(resposta, F - posicoes[R-1] - 1); //comprimento em branco no final
	for (int i = 1; i < R; i++)
		resposta = max(resposta, (posicoes[i] - posicoes[i-1]) / 2); //comprimento em branco entre posicoes
	
	cout << resposta << endl;
	return 0;
}