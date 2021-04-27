#include <bits/stdc++.h>
using namespace std;

int main(){
	int I, N, dinheiro[3], x;
	char op, j, k;
	cin >> I >> N;
	dinheiro[0] = dinheiro[1] = dinheiro[2] = I;

	while(N--){
		cin >> op >> j;
		if (op == 'A'){
			cin >> k >> x;
			dinheiro[j - 'D'] += x;
			dinheiro[k - 'D'] -= x;
		}
		else{
			cin >> x;
			dinheiro[j - 'D'] += x * (op == 'C' ? -1 : 1);
			/*if (op == 'C')
				dinheiro[j - 'D'] -= x;
			else
				dinheiro[j - 'D'] += x;*/
		}
	}
	cout << dinheiro[0] << " " << dinheiro[1] << " " << dinheiro[2] << "\n";
	return 0;
}