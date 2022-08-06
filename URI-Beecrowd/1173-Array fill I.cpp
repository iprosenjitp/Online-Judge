#include<iostream>
using namespace std;
int main()
{
    int x[11], n;
    scanf("%d", &n);

    x[0] = n;

    for(int i = 1; i < 10; i++){
        x[i] = 2 * x[i-1];
    }

    for(int i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, x[i]);
    }
    return 0;
}

