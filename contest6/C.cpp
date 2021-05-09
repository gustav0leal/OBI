#include <bits/stdc++.h>
using namespace std;

int main(){
	int v, n, t;
	cin >> v >> n;
	t = v * n;
	for (int y = 1; y <= 9; y++){
		if (y > 1) cout << " ";
		cout << (t*y+9)/10;
	}
	cout << "\n";
	return 0;
}