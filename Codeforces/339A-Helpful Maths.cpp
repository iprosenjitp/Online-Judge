#include <iostream>
#include <algorithm>

using namespace std;

int stringLength(char str[])
{
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++) len++;
    return len;
}

int main()
{
    char str[102];
    int A[102];

    scanf("%s", str);
    int len = stringLength(str);
    for(int i = 0, j = 0; i < len; i+=2, j++){
        A[j] = str[i] - '0';
    }
//    for(int i = 0; i < len/2+1; i++) printf("%d ", A[i]);
    int n = len/2 + 1;
    sort(A, A+n);

    printf("%d", A[0]);
    for(int i = 1; i < len/2+1; i++) printf("+%d", A[i]);
    printf("\n");

    return 0;
}

