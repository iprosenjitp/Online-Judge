#include <iostream>

using namespace std;

int main()
{
    string S;
    int A[30];
    int cnt = 0;

    for(int i = 0; i < 26; i++) A[i] = 0;

    getline(cin, S);
    int len = S.length();

    for(int i = 0; i < len; i++){
        if(S[i] >= 'a' && S[i] <= 'z'){
            A[S[i] - 'a']++;
        }
    }

    for(int i = 0; i < 26; i++){
        if(A[i]) cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}

