#include <bits/stdc++.h>

using namespace std;

const int N = int(1e5) + 10;
int hater[N];//hater[i] o cara que odeia a musica i e tem maior prioridade, -1 caso ngm odeia a musica i
int a[N];//a[i] eh a musica preferida do cara i
int mark[N];//mark[i] eh 1 se a musica i ja tocou antes, 0 caso contrario

int main(){
    memset(hater, -1, sizeof(hater));//inicializar todo o array com -1

    int n, m, c;

    scanf("%d %d %d", &n, &m, &c);

    for(int i = 0 ; i < n ; i++){
        int od;
        scanf("%d %d", &a[i], &od);

        if(hater[od] == -1){
            hater[od] = i;
        }
    }

    int change = 0;

    while(true){
        if(hater[c] == -1){
            break;
        }

        if(mark[c]){
            printf("-1\n");
            return 0;
        }

        mark[c] = 1;

        c = a[hater[c]];
        change++;
    }

    printf("%d\n", change);

    return 0;
}