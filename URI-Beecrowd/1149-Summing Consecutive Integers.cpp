#include<iostream>
using namespace std;
int main()
{
    int a, n, l, sum = 0;
    scanf("%d", &a);
    while(1){
        scanf("%d", &n);
        if(n > 0){
            break;
        }
    }
    for(int i = a, j = 1; j <= n; i++, j++){
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}
