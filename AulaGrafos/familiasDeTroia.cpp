#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+10;
vector<int> adj[MAXN];

int visitado[MAXN];

void dfs(int u){
	visitado[u] = 1;
	int v;
	for (int i = 0; i < adj[u].size(); i++){
		v = adj[u][i];
		if (visitado[v] == 0)
			dfs(v);
	}
}

int main(){
	int n, m, a, b;
	cin >> n >> m;
	for (int i = 0; i < m; i++){
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	int total = 0;
	for (int u = 1; u <= n; u++){
		if (visitado[u] == 0){
			dfs(u);
			total++;
		}
	}
	cout << total << "\n";
	return 0;
}