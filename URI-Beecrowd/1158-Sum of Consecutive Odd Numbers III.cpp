#include<iostream>
using namespace std;
int main()
{
    int n, a, b, sum;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        sum = 0;
        scanf("%d %d", &a, &b);
        if(a%2 == 0){
            x++;
        }
        for(int j = 0; j < y; j++){
            sum += j;
            j += 2;
        }
        printf("%d\n", sum);
    }
    return 0;
}
