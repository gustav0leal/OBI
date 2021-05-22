#include <bits/stdc++.h>
using namespace std;

int main(){
	int ia, ib, fa, fb, op = 0;
	cin >> ia >> ib >> fa >> fb;

	if (ib != fb){
		op++;
		ia = 1 - ia; // !ia
	}
	if (ia != fa)
		op++;
	cout << op << endl;
	return 0;
}