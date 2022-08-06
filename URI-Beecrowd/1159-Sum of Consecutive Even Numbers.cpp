#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0, j = 1;
    while(1){
        scanf("%d", &n);
        if (n == 0){
            break;
        }
        for(int i = n; j <= 5; i++){
            if(i%2 == 0){
                sum += i;
                j++;
            }
        }
        printf("%d\n", sum);
        sum = 0;
        j = 1;
    }
    return 0;
}
