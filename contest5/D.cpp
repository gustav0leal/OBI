#include <bits/stdc++.h>

using namespace std;

const int N = 110;
int cnt[N];

int main(){
    int a, v;
    int test = 0;

    while(true){
        test++;
        scanf("%d %d", &a, &v);
    
        if(a == 0 && v == 0){
            break;
        }

        int mx = 0;

        for(int i = 0 ; i < v ; i++){
            int ai, bi;

            scanf("%d %d", &ai, &bi);

            cnt[ai]++;
            cnt[bi]++;

            mx = max({mx, cnt[ai], cnt[bi]});
        }

        vector< int > v;

        for(int i = 1 ; i <= a ; i++){
            if(cnt[i] == mx){
                v.push_back(i);
            }
        }

        printf("Teste %d\n", test);

        for(int i = 0 ; i < v.size() ; i++){
            printf("%d ", v[i]);

            if(i == int(v.size()) - 1){
                printf("\n\n");
            }
        }

        for(int i = 1 ; i <= a ; i++){
            cnt[i] = 0;
        }
    }

    return 0;
}