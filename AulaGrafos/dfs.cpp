#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100;
vector<int> adj[MAXN];

int visitado[MAXN];

void dfs(int u){
	cout << "Inicio vertice " << u << "\n";
	visitado[u] = 1;
	int v;
	for (int i = 0; i < adj[u].size(); i++){
		v = adj[u][i];
		if (visitado[v] == 0)
			dfs(v);
	}
	cout << "Fim vertice " << u << "\n";
}

int main(){
	adj[0].push_back(1);
	adj[1].push_back(0);

	adj[1].push_back(3);
	adj[3].push_back(1);

	adj[3].push_back(4);
	adj[4].push_back(3);

	adj[1].push_back(5);
	adj[5].push_back(1);

	adj[0].push_back(2);
	adj[2].push_back(0);

	adj[2].push_back(6);
	adj[6].push_back(2);

	adj[7].push_back(8);
	adj[8].push_back(7);

	dfs(8);
	for (int i = 0; i < 9; i++){
		cout << i << " -> " << visitado[i] << "\n";
	}
	return 0;
}