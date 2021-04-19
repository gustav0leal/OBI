#include <bits/stdc++.h>

using namespace std;

int main(){
    int b, g;

    scanf("%d %d", &b, &g);

    if(b >= (g / 2)){
        printf("Amelia tem todas bolinhas!\n");
    }else{
        printf("Faltam %d bolinha(s)\n", (g / 2) - b);
    }

    return 0;
}