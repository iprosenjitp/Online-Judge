#include <iostream>
#define lli long long int

using namespace std;

int main()
{
    int t;
    lli n;

    scanf("%d", &t);

    while(t--){
        scanf("%lld", &n);
        int ans = n/2;
        if(n%2 == 0) ans--;

        printf("%d\n", ans);
    }

    return 0;
}

