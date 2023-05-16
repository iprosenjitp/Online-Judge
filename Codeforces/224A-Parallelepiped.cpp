#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    ll a = sqrt((s1*s3)/s2);
    ll b = sqrt((s1*s2)/s3);
    ll c = sqrt((s2*s3)/s1);
    ll ans = 4 * (a+b+c);
    cout << ans << "\n";
}
