#include <iostream>

using namespace std;

int main()
{
    int v, t;

    while(scanf("%d %d", &v, &t) != EOF){
        int ans = 2 * v * t;
        printf("%d\n", ans);
    }

    return 0;
}

