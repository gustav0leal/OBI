#include <bits/stdc++.h>

using namespace std;

const int N = int(1e6) + 10;

int a[N];

int main(){
    int n, d;
    int total = 0;

    scanf("%d %d", &n, &d);   

    for(int i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
        total += a[i];
    }

    int i = 0, j = 0;
    int s = a[0];
    int ans = 0;//quantidade de arrays tal que soma(a[i...j]) = d

    while(true){
        if(s == d){
            // printf("a[%d] + ... + a[%d] = %d\n", i, j, d);
            ans++;
        }

        if(j < n - 1){
            j++;
            s += a[j];
        }else{
            break;
        }

        while(i < j && s > d){
            s -= a[i];
            i++;
        }
    }

    i = 0, j = 1;
    int prefi = a[0];
    int sufj = total - a[0];
    int ans1 = 0;

    while(true){
        if(prefi + sufj == d){
            // printf("pref[%d] + suf[%d] = %d\n", i, j, d);
            ans1++;
        }

        if(j < n - 1){
            sufj -= a[j];
            j++;
        }else{
            break;
        }

        while(i < j - 1 && prefi + sufj < d){
            i++;
            prefi += a[i];
        }
    }

    printf("%d\n", ans + ans1);

    return 0;
}