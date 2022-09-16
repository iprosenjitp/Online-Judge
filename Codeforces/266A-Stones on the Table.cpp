#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    char S[51];
    scanf("%s", S);

    char P = S[0];
    int cnt = 0;

    for(int i = 1; i < n; i++){
        if(P == S[i]) cnt++;
        else P = S[i];
    }

    printf("%d\n", cnt);

    return 0;
}

