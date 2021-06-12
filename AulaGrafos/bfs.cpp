#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N=10;
vector<int> lista[N];
int visitados[N];

void bfs(int s)
{
	queue<int> f;//cria a fila
	f.push(s);//coloca na fila
	//memset(visitados,-1,sizeof(visitados));
	for (int i = 0; i < N; ++i)
	{
		visitados[i]=-1;
	}
	visitados[s]=0;
	while(!f.empty())//verifica se a fila está vazia
	{
		int at = f.front();//pega o topo
		f.pop();//remove o topo
		for (int i = 0; i < lista[at].size(); ++i)
		{
			int v=lista[at][i];
			if(visitados[v]==-1)
			{
				visitados[v]=visitados[at]+1;
				f.push(v);//coloca na fila
			}
		}
	}
}



/*
5
1 2
1 3
2 4
4 5

*/

int main()
{
	lista[1].push_back(2);
	lista[2].push_back(1);

	lista[1].push_back(3);
	lista[3].push_back(1);

	lista[2].push_back(4);
	lista[4].push_back(2);

	lista[4].push_back(5);
	lista[5].push_back(4);
	bfs(1);
	for (int i = 1; i <= 5; ++i)
	{
		cout<<i<<" "<<visitados[i]<<"\n";
	}
	return 0;
}


