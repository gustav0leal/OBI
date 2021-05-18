#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, n, f, cont = 0, t = 40000000;
	cin >> a;
	cin >> n;
	while(n--){
		cin >> f;
		if (a*f >= t)
			cont++;
	}
	cout << cont << "\n";
	return 0;
}