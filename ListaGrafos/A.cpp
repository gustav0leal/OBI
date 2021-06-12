#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N=510;

string vet[N];
int n;
char use;

void bfs(int sx,int sy)
{
	queue<pair<int,int>> f;//cria a fila
	if(vet[sx][sy]<=use){
		f.push({sx,sy});//coloca na fila
		vet[sx][sy]='*';
	}
	//memset(visitados,-1,sizeof(visitados));
	while(!f.empty())//verifica se a fila está vazia
	{
		sx = f.front().first;//pega o topo
		sy = f.front().second;
		f.pop();//remove o topo
		if(sx+1<n && vet[sx+1][sy]!='*' && vet[sx+1][sy]<=use )
		{
			vet[sx+1][sy]='*';
			f.push({sx+1,sy});
		}
		if(sx-1>=0 && vet[sx-1][sy]!='*' && vet[sx-1][sy]<=use )
		{
			vet[sx-1][sy]='*';
			f.push({sx-1,sy});
		}
		if(sy+1<n && vet[sx][sy+1]!='*' && vet[sx][sy+1]<=use )
		{
			vet[sx][sy+1]='*';
			f.push({sx,sy+1});
		}
		if(sy-1>=0 && vet[sx][sy-1]!='*' && vet[sx][sy-1]<=use )
		{
			vet[sx][sy-1]='*';
			f.push({sx,sy-1});
		}
	}
}


int main()
{
	cin>>n>>use;
	for (int i = 0; i < n; ++i)
	{
		cin>>vet[i];
	}
	bfs(0,0);
	for (int i = 0; i < n; ++i)
	{
		cout<<vet[i]<<"\n";
	}
	return 0;
}