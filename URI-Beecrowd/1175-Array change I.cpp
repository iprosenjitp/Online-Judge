#include<iostream>
using namespace std;
int main()
{
    int A[101];
    for(int i = 0; i < 20; i++){
        scanf("%d", &A[i]);
    }

    for(int i = 19, j = 0; i > j; i--, j++){
        swap(A[j], A[i]);
    }

    for(int i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, A[i]);
    }
    return 0;
}

