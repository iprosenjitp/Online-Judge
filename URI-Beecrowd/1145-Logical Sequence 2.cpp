#include<iostream>
using namespace std;
int main()
{
    int a, b, k, l, m = 1;
    scanf("%d %d", &a, &b);
    k = b/a;
    l = a;
    if(a > 1 && a < 20 && b > a && b < 100000){
        for(int i = 1; i <= k; i++){
            printf("%d", m);
            for(int j = m+1; j <= l; j++){
                printf(" %d", j);
            }
            printf("\n");
            m += a;
            l += a;
        }
    }

    return 0;
}
