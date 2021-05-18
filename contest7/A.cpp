#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, m;
	vector<int> sand;
	cin >> n;
	cin >> k;
	for (int i = 0; i < k; i++){
		cin >> m;
		sand.push_back(m);
	}

	int l = 1, r = 1e8/n, mid, fatias;
	while (l <= r){
		mid = (l + r) / 2;

		fatias = 0;
		for (int i = 0; i < k; i++){
			fatias += sand[i]/mid;
		}

		if (fatias >= n)
			l = mid+1;
		else
			r = mid-1;
	}

	cout << l-1 << endl;

	return 0;
}