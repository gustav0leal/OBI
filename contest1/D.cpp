#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1010;
int mapa[MAXN][MAXN];

int main(){
	int L, C, x, y, ultX = -1, ultY = -1;
	vector<vector<int>> movs = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
	cin >> L >> C;
	cin >> y >> x;
	y--;
	x--;
	for (int i = 0; i < L; i++)
		for (int j = 0; j < C; j++)
			cin >> mapa[i][j];
	
	int i;
	while(ultX != x || ultY != y){
		for (i = 0; i < 4; i++){
			if (x + movs[i][0] >= C || x + movs[i][0] < 0 || y + movs[i][1] >= L || y + movs[i][1] < 0)
				continue;
			if (mapa[y + movs[i][1]][x + movs[i][0]] == 1 && (x + movs[i][0] != ultX || y + movs[i][1] != ultY))
				break;
		}
		ultX = x;
		ultY = y;
		if (i < 4){
			x = x + movs[i][0];
			y = y + movs[i][1];
		}
	}
	cout << y+1 << " " << x+1 << endl;
	return 0;
}