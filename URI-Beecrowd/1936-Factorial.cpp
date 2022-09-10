#include <iostream>

using namespace std;

int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int A[10];

int main()
{
    for(int i = 0; i < 9; i++){
        A[i] = factorial(i);
    }

    int n, cnt = 0;
    scanf("%d", &n);

    for(int i = 8; i > 0;){
        if(A[i] > n) i--;
        else{
            cnt++;
            n -= A[i];
        }
    }
    printf("%d\n", cnt);

    return 0;
}

