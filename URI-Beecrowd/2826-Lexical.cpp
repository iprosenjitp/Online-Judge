#include <iostream>

using namespace std;

int main()
{
    char A[22], B[22];
    char ch;
    int lenA = 0, lenB = 0;

    scanf("%s", A);
    scanf("%c", &ch);
    scanf("%s", B);

    for(int i = 0; A[i] != '\0'; i++) lenA++;
    for(int i = 0; B[i] != '\0'; i++) lenB++;

    int len;
    if(lenA <= lenB) len = lenA;
    else len = lenB;

    for(int i = 0; i < len; i++){
        if(A[i] != B[i]){
            if(A[i] < B[i]) printf("%s\n%s\n", A, B);
            else printf("%s\n%s\n", B, A);
            return 0;
        }
    }

    if(lenA <= lenB) printf("%s\n%s\n", A, B);
    else printf("%s\n%s\n", B, A);

    return 0;
}

