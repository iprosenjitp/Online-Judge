#include <iostream>

using namespace std;

int main()
{
    char A[102];
    char B[102];

    scanf("%s", A);
    scanf("%s", B);

    for(int i = 0; A[i] != '\0'; i++){
        if(A[i] == B[i]) printf("0");
        else printf("1");
    }
    printf("\n");

    return 0;
}

