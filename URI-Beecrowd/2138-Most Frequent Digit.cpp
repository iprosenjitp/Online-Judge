#include <iostream>
#include <string.h>

using namespace std;

int stringLength(char str[])
{
    int length = 0;
    for(int i = 0; str[i] != '\0'; i++){
        length++;
    }
    return length;
}

int main()
{
    char str[10004];
    int A[11];

    while(scanf("%s", str) != EOF){
        for(int i = 0; i <= 9; i++) A[i] = 0;

        int len = stringLength(str);

        for(int i = 0; i < len; i++){
            int digit = str[i] - '0';
            A[digit]++;
        }

        int big = A[0];
        int index = 0;
        for(int i = 1; i <= 9; i++){
            if(A[i] >= big){
                big = A[i];
                index = i;
            }
        }
        printf("%d\n", index);
    }

    return 0;
}

