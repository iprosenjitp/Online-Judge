#include<iostream>
using namespace std;

int main()
{
    int n, x, y;
    while(scanf("%d", &n) != EOF){
        x = 0;
        y = n-1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j == y){
                    printf("2");
                    continue;
                }

                if(j == x){
                    printf("1");
                    continue;
                }

                printf("3");
            }
            printf("\n");
            x++;
            y--;
        }
    }

    return 0;

}
