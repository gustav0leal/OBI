#include <bits/stdc++.h>

using namespace std;

int card[14];

int main(){
    int t;
    int cnta = 0;
    int cntb = 0;

    card[4] = 1;
    card[5] = 2;
    card[6] = 3;
    card[7] = 4;
    card[12] = 5;
    card[11] = 6;
    card[13] = 7;
    card[1] = 8;
    card[2] = 9;
    card[3] = 10;

    scanf("%d", &t);

    for(int i = 0 ; i < t ; i++){
        int a1, a2, a3, b1, b2, b3;

        scanf("%d %d %d %d %d %d", &a1, &a2, &a3, &b1, &b2, &b3);

        a1 = card[a1];
        a2 = card[a2];
        a3 = card[a3];
        b1 = card[b1];
        b2 = card[b2];
        b3 = card[b3];

        int roda = 0;
        int rodb = 0;

        if(a1 >= b1){
            roda++;
        }else{
            rodb++;
        }

        if(a2 >= b2){
            roda++;
        }else{
            rodb++;
        }

        if(a3 >= b3){
            roda++;
        }else{
            rodb++;
        }

        if(roda >= rodb){
            cnta++;
        }else{
            cntb++;
        }
    }

    printf("%d %d\n", cnta, cntb);

    return 0;
}