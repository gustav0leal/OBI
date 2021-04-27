#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10010;
int rect[MAXN][4];

int main(){
	int n, test = 1;
	bool check;
	while(cin >> n, n){
		check = true;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < 4; j++)
				cin >> rect[i][j];
		}

		for (int i = 1; i < n; i++){
			rect[0][0] = max(rect[0][0], rect[i][0]);
			rect[0][1] = min(rect[0][1], rect[i][1]);
			rect[0][2] = min(rect[0][2], rect[i][2]);
			rect[0][3] = max(rect[0][3], rect[i][3]);
			if (rect[0][1] < rect[0][3] || rect[0][0] > rect[0][2]){
				check = false;
				break;
			}
		}

		cout << "Teste " << test << "\n";
		if (check == false)
			cout << "nenhum\n";
		else
			cout << rect[0][0] << " " << rect[0][1] << " " 
				<< rect[0][2] << " " << rect[0][3] << "\n";
		cout << "\n";
		test++;
	}
	return 0;
}