#include <iostream>

using namespace std;

int main()
{
    int n;
    char S[100005];

    scanf("%d", &n);
    scanf("%s", S);

    int cntA = 0, cntD = 0;

    for(int i = 0; i < n; i++){
        if(S[i] == 'A') cntA++;
        else cntD++;
    }

    if(cntA == cntD) printf("Friendship\n");
    else if(cntA > cntD) printf("Anton\n");
    else printf("Danik\n");

    return 0;
}

