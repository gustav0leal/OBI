#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n, x, y, xb, yb, idxResp;
	int dist, minDist;
	cin >> t;
	while(t--){
		cin >> n;
		cin >> xb >> yb;
		minDist = 1e9; //1000000000
		for (int i = 1; i <= n; i++){
			cin >> x >> y;
			dist = (x - xb) * (x - xb) + (y - yb) * (y - yb);
			if (dist < minDist){
				minDist = dist;
				idxResp = i;
			}
		}
		cout << idxResp << "\n";
	}
	return 0;
}
