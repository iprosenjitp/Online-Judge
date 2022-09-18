#include <iostream>

using namespace std;

int n;
int H[32];
int G[32];

int func(int x)
{
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(G[i] == x) cnt++;
    }
    return cnt;
}

int main()
{
    int ans = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &H[i], &G[i]);
    }

    for(int i = 0; i < n; i++){
        ans += func(H[i]);
    }

    printf("%d\n", ans);

    return 0;
}

