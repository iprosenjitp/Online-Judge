#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll x, y, n;
        cin >> x >> y >> n;
        ll a = n%x;
        ll ans = n - (a-y);
        if(a < y) ans -= x;
        cout << ans << "\n";
    }
}
