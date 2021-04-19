#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, qtd, cont;
	char s;
	scanf("%d%*c", &n);
	while(n--){
		cont = qtd = 0;
		while(scanf("%c", &s), s != '\n'){
			if (s == '<') cont++;
			else if (s == '>' && cont > 0){
				cont--;
				qtd++;
			}
		}
		cout << qtd << "\n";
	}
	return 0;
}
