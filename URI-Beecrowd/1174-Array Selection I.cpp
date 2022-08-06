#include<iostream>
using namespace std;
int main()
{
    double A[101];
    for(int i = 0; i < 100; i++){
        scanf("%lf", &A[i]);
    }
    for(int i = 0; i < 100; i++){
        if(A[i] <= 10.0){
            printf("A[%d] = %0.1lf\n", i, A[i]);
        }
    }
    return 0;
}
