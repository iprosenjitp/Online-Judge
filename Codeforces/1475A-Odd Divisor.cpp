#include <iostream>
#include <math.h>
#define lli long long int

using namespace std;

int main()
{
    int t;
    lli n;
    scanf("%d", &t);
    while(t--){
        scanf("%lld", &n);
        if((n & (n-1)) == 0) printf("NO\n");
        else printf("YES\n");
    }

    return 0;
}

