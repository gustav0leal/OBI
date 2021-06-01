#include <bits/stdc++.h>

using namespace std;

const int N = int(1e5) + 10;
int a[N];

int main(){
    int n;

    scanf("%d", &n);

    int sum = 0;

    for(int i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }

    sort(a, a + n, greater< int >());

    for(int i = 2 ; i < n ; i += 3){
        sum -= a[i];
    }

    printf("%d\n", sum);

    return 0;
}