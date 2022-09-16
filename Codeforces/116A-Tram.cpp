#include <iostream>

using namespace std;

int main()
{
    int n;
    int ans = 0, counter = 0;

    scanf("%d", &n);
    while(n--){
        int a, b;
        scanf("%d %d", &a, &b);

        counter -= a;
        counter += b;

        if(counter > ans) ans = counter;
    }

    printf("%d\n", ans);

    return 0;
}

