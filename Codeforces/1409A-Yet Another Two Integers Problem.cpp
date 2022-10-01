#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);

        int diff;
        if(a >= b) diff = a-b;
        else diff = b-a;

        int ans = diff/10;
        if(diff%10) ans++;

        printf("%d\n", ans);
    }

    return 0;
}
