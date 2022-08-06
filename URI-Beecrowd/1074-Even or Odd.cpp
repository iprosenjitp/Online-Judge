#include<stdio.h>
int main()
{
    int n, x;

    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &x);

        if(x == 0){
            printf("NULL\n");
        }
        else{
            if(x % 2 == 1 || x % 2 == -1){
                if(x > 0){
                    printf("ODD POSITIVE\n");
                }
                else{
                    printf("ODD NEGATIVE\n");
                }
            }
            else{
                if(x > 0){
                    printf("EVEN POSITIVE\n");
                }
                else{
                    printf("EVEN NEGATIVE\n");
                }
            }

        }
    }
    return 0;
}


