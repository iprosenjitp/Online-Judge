#include <iostream>

using namespace std;

int main()
{
    int n, h, ni;
    int cnt = 0;

    scanf("%d %d", &n, &h);

    for(int i = 0; i < n; i++){
        scanf("%d", &ni);
        if(ni > h) cnt++;
        cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}

