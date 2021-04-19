#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, p, divida, qtd;
	while(cin >> n, n != -1){ //caso de teste
		divida = qtd = 0;
		for (int i = 0; i < n; i++){
			cin >> p;
			divida += p;
			if (divida % 100 == 0)
				qtd++;
		}
		cout << qtd << "\n";
	}
	return 0;
}