#include <iostream>

using namespace std;

int main()
{
    int m, n;
    int flag = 1;

    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i%2 == 0) printf("#");
            else{
                if(flag){
                    for(int k = 0; k < m-1; k++) printf(".");
                    printf("#");
                }
                else{
                    printf("#");
                    for(int k = 0; k < m-1; k++) printf(".");
                }
                flag = 1 - flag;
                break;
            }
        }
        printf("\n");
    }

    return 0;
}

