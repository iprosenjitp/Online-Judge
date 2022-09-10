#include <iostream>

using namespace std;

int A[6];

int isAscending()
{
    for(int i = 1; i < 5; i++){
        if(A[i] < A[i-1]){
            return 0;
        }
    }
    return 1;
}

int isDescending()
{
    for(int i = 1; i < 5; i++){
        if(A[i] > A[i-1]){
            return 0;
        }
    }
    return 1;
}

int main()
{
    for(int i = 0; i < 5; i++){
        scanf("%d", &A[i]);
    }

    if(isAscending() == 1) printf("C\n");
    else if(isDescending() == 1) printf("D\n");
    else printf("N\n");

    return 0;
}

