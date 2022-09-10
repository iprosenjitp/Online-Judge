#include <iostream>

using namespace std;

int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    a--;

    long long int ans = (b * (b+1)) / 2 - (a * (a + 1)) / 2;

    printf("%lld\n", ans);

    return 0;
}

