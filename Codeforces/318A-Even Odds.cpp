#include <iostream>
#define lli long long int

using namespace std;

int main()
{
    lli n, k, ans;

    scanf("%lld %lld", &n, &k);

    lli mid = n/2;
    if(n%2) mid++;

    if(k > mid){
        k = abs(mid - k);
        ans = 2*k;
    }
    else ans = 2*k - 1;

    printf("%lld\n", ans);

    return 0;
}

