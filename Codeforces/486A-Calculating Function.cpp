#include <iostream>
#define lli long long int

using namespace std;

int main()
{
    lli n, ans, odd, even;

    scanf("%lld", &n);

    odd = even = n/2;
    if(n%2) odd = n/2 + 1;

//    printf("%lld %lld\n", odd, even);

    lli oddSum = odd*odd;
    lli evenSum = even * (even + 1);

    ans = evenSum - oddSum;

    printf("%lld\n", ans);

    return 0;
}

