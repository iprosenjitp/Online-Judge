#include <iostream>

using namespace std;

int main()
{
    char S[102];
    int oneCount = 0;

    scanf("%s", S);

    for(int i = 0; S[i] != '\0'; i++){
        if(S[i] == '1') oneCount++;
    }

    oneCount%2 == 0 ? printf("%s0\n", S) : printf("%s1\n", S);

    return 0;
}

