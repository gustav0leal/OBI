#include <bits/stdc++.h>

using namespace std;

int main(){
    char a, b, c, d;

    scanf("%c%c %c%c", &a, &b, &c, &d);

    int da = a;
    int db = b;
    int dc = c;
    int dd = d;
    // printf("%d\n", 'b' - 'a');//1

    // (da, db) -> (dc, dd)

    if((da + 1 == dc && db - 2 == dd)
        || (da + 2 == dc && db - 1 == dd)
        || (da + 2 == dc && db + 1 == dd)
        || (da + 1 == dc && db + 2 == dd)
        || (da - 1 == dc && db + 2 == dd)
        || (da - 2 == dc && db + 1 == dd)
        || (da - 2 == dc && db - 1 == dd)
        || (da - 1 == dc && db - 2 == dd)
    ){
        printf("VALIDO\n");
    }else{
        printf("INVALIDO\n");
    }

    return 0;
}