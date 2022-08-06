#include<iostream>
using namespace std;

int main()
{
    int n, arr[101][101], hn, x, y;
    while(1){
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        hn = n/2;
        if(n%2 == 1){
            hn++;
        }

        x = 0;
        y = n;
        for(int k = 1; k <= hn; k++){
            for(int i = x; i < y; i++){
                for(int j = x; j < y; j++){
                    arr[i][j] = k;
                }
            }
            x++;
            y--;
        }


        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j == 0){
                    printf("%3d", arr[i][j]);
                }
                else{
                    printf(" %3d", arr[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");

    }

    return 0;
}






