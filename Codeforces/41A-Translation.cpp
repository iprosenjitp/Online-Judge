#include <iostream>

using namespace std;

int stringLength(char str[])
{
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++) len++;

    return len;
}

int main()
{
    char S[102], T[102];
    scanf("%s", S);
    scanf("%s", T);

    int lenS = stringLength(S);
    int lenT = stringLength(T);

    if(lenS != lenT) {
        printf("NO\n");
        return 0;
    }

    for(int i = 0, j = lenS-1; i < lenS; i++, j--){
        if(S[i] != T[j]){
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}

