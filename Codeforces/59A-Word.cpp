#include <iostream>

using namespace std;

int stringLength(char W[])
{
    int len = 0;
    for(int i = 0; W[i] != '\0'; i++) len++;

    return len;
}

int main()
{
    char W[102];

    scanf("%s", W);

    int len = stringLength(W);

    int cntUppercase = 0, cntLowercase = 0;

    for(int i = 0; i < len; i++){
        if(W[i] >= 'A' && W[i] <= 'Z') cntUppercase++;
        else cntLowercase++;
    }

    if(cntLowercase >= cntUppercase){
        for(int i = 0; i < len; i++){
            if(W[i] >= 'A' && W[i] <= 'Z')
                W[i] = 'a' + (W[i] - 'A');
        }
    }

    else{
        for(int i = 0; i < len; i++){
            if(W[i] >= 'a' && W[i] <= 'z')
                W[i] = 'A' + (W[i] - 'a');
        }
    }

    printf("%s\n", W);

    return 0;
}

