#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+10;
vector<int> adj[MAXN];

int visitado[MAXN];
int menorDiferenca = 1e9, n;

// P1 = qtd  P2 = n - qtd
// P2 - P1 = (n - qtd) - qtd = n - 2*qtd
//n = 4  qtd = 3 n - 2*qtd -> 4 - 6 = |-2|

int dfs(int u){
	visitado[u] = 1;
	int v;
	int cont = 1;
	for (int i = 0; i < adj[u].size(); i++){
		v = adj[u][i];
		if (visitado[v] == 0){
			int qtd = dfs(v);
			menorDiferenca = min(menorDiferenca, abs(n - 2*qtd));
			cont += qtd;
		}
	}
	//cout << "Vertice " << u << " cont: " << cont << "\n";
	return cont;
}

int main(){
	int a, b;
	cin >> n;
	for (int i = 1; i < n; i++){
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	dfs(1);
	cout << menorDiferenca << endl;
	return 0;
}