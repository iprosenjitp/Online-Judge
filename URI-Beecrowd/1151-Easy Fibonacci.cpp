#include<iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1, sum = 0;
    scanf("%d", &n);

    for(int i = 1; i <= (n - 1); i++){
        printf("%d ", a);
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("%d\n", a);
    return 0;
}

