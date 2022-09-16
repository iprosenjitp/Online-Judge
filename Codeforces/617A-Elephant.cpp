#include <iostream>

using namespace std;

int main()
{
    int x;
    scanf("%d", &x);

    int ans = x/5;
    if(x%5 > 0) ans++;

    printf("%d\n", ans);

    return 0;
}

