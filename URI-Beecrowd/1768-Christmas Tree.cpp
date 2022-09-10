#include <iostream>

using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n) != EOF){
        int sc = n/2;
        int x = 1;
        for(int i = 0; i <= n/2; i++){
            for(int j = 0; j < sc; j++){
                printf(" ");
            }
            for(int j = 0; j < x; j++){
                printf("*");
            }
            printf("\n");
            sc--;
            x = x+2;
        }
        sc = n/2;
        x = 1;
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < sc; j++){
                printf(" ");
            }
            for(int j = 0; j < x; j++){
                printf("*");
            }
            printf("\n");
            sc--;
            x = x+2;
        }
        printf("\n");
    }

    return 0;
}

