#include <iostream>

using namespace std;

int ara[10004];

int main()
{
    int n, r, in;
    while(scanf("%d %d", &n, &r) != EOF){
        for(int i = 1; i <= r; i++) {
            scanf("%d", &in);
            ara[in] = -1;
        }

        if(n == r) {
            printf("*\n");
            continue;
        }

        for(int i = 1; i <= n; i++){
            if(ara[i] != -1) printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}

