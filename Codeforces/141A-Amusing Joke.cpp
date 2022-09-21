#include <iostream>

using namespace std;

int stringLength(char S[])
{
    int len = 0;
    for(int i = 0; S[i] != '\0'; i++) len++;

    return len;
}

int main()
{
    char A[102];
    char B[102];
    char C[102];

    int X[30];
    int Y[30];

    for(int i = 0; i < 26; i++){
        X[i] = 0;
        Y[i] = 0;
    }

    scanf("%s", A);
    scanf("%s", B);
    scanf("%s", C);

    int lenA = stringLength(A);
    int lenB = stringLength(B);
    int lenC = stringLength(C);

    if((lenA+lenB) != lenC) {
        printf("NO\n");
        return 0;
    }

    for(int i = 0; i < lenA; i++) X[ A[i] - 'A' ]++;
    for(int i = 0; i < lenB; i++) X[ B[i] - 'A' ]++;

    for(int i = 0; i < lenC; i++) Y[ C[i] - 'A' ]++;

//    for(int i = 0; i < 26; i++) printf("%d ", X[i]);
//    printf("\n");
//    for(int i = 0; i < 26; i++) printf("%d ", X[i]);
//    printf("\n");

    for(int i = 0; i < 26; i++){
        if(X[i] != Y[i]){
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}

