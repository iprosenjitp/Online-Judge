#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll x1, y1, z1, x2, y2, z2;
        cin >> x1 >> y1 >> z1;
        cin >> x2 >> y2 >> z2;
        ll ans;
        ll remY1 = max(0LL, y1-(x2+y2));
        if(remY1) ans = -2*remY1;
        else ans = 2*min(z1, y2-max(0LL, y1-x2));
        cout << ans << "\n";
    }
}
