#include <bits/stdc++.h>
using namespace std;

int main(){
	cout << fixed << setprecision(1);
	char letra;
	string frase;
	int contador = 0, qtdPalavras = 0;
	bool letraExiste = false;
	cin >> letra;
	cin.ignore();
	getline(cin, frase);
	frase.push_back(' ');
	for (int i = 0; i < frase.size(); i++){
		if (frase[i] == ' '){
			contador += (letraExiste ? 1 : 0);
			qtdPalavras++;
			letraExiste = false;
		}
		else if (frase[i] == letra)
			letraExiste = true;
	}
	cout << (100.0 * contador) / qtdPalavras << endl;

	return 0;
}