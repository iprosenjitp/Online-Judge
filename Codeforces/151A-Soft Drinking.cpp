#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int x = (k * l) / nl;
    int y = c * d;
    int z = p / np;
    int ans = min(x, min(y, z)) / n;
    cout << ans << "\n";
}
