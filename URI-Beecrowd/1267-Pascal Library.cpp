#include <iostream>

using namespace std;

int main()
{
    int A[502][102];
    while(1){
        int n, d, sum = 0;
        int flag = 0;

        scanf("%d %d", &n, &d);

        if(n == 0 && d == 0) break;

        for(int i = 0; i < d; i++){
            for(int j = 0; j < n; j++){
                scanf("%d", &A[i][j]);
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < d; j++){
//                printf("%d ", A[j][i]);
                sum += A[j][i];
            }
//            printf("\n");
//            printf("%d\n", sum);
            if(sum == d){
                flag = 1;
                break;
            }
            sum = 0;
        }

        if(flag == 1) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}

