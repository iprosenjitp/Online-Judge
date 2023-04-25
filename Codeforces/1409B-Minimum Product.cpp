#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll a, b, x, y, n;
        ll ans = 1e18;
        cin >> a >> b >> x >> y >> n;
        for(int i = 0; i < 2; i++){
            ll da = min(n, a-x);
            ll db = min(n-da, b-y);
            ans = min(ans, (a-da)*(b-db));
            swap(a, b);
            swap(x, y);
        }
        cout << ans << "\n";
    }
}
