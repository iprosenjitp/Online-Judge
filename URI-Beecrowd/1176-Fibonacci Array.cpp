#include<iostream>
using namespace std;
int main()
{
    long long int A[101];
    int t, n;

    A[0] = 0;
    A[1] = 1;
    for(int i = 2; i < 61; i++){
        A[i] = A[i-1] + A[i-2];
    }

    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d", &n);
        printf("Fib(%d) = %d\n", n, A[n]);
    }

    return 0;
}


