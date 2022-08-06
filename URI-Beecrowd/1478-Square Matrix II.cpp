#include<iostream>
using namespace std;

int main()
{
    int n, arr[101][101], hn, x;
    while(1){
        scanf("%d", &n);
        if(n == 0){
            break;
        }

        for(int i = 0; i < n; i++){
            x = i+1;
            for(int j = 0; j <= i; j++){
                arr[i][j] = x;
                x--;
            }
            x++;
            for(int j = i+1; j < n; j++){
                x++;
                arr[i][j] = x;
            }
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







