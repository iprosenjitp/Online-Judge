#include <iostream>

using namespace std;

int main()
{
    int n;
    char S[102];
    int A[30];

    for(int i = 0; i < 26; i++) A[i] = 0;

    scanf("%d", &n);

    scanf("%s", &S);

    if(n < 26){
        printf("NO\n");
        return 0;
    }

    for(int i = 0; i < n; i++){
        if(S[i] >= 'A' && S[i] <= 'Z') A[S[i] - 'A']++;
        else A[S[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        if(A[i] == 0){
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}

