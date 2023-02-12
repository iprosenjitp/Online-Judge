#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, m, a;
    cin >> n >> m >> a;
    ll ans = ceil(n*1.0/a) * ceil(m*1.0/a);
    cout << ans << "\n";
}
