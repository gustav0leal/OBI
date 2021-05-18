#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, valor = 7;
	cin >> n;

	if (n > 100){
		valor += 5 * (n - 100);
		n = 100;
	}
	if (n > 30){
		valor += 2 * (n - 30);
		n = 30;
	}
	if (n > 10){
		valor += 1 * (n - 10);
		n = 10;
	}
	cout << valor << "\n";
	return 0;
}