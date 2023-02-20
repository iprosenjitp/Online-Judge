#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll x, y, a, b, ans;
        cin >> x >> y >> a >> b;
        if(2*a >= b) ans = min(x, y) * b + abs(x-y) * a;
        else ans = (x + y) * a;
//        if(x == 0 && y == 0) ans = 0;
//        else if(x == 0 || y == 0) ans = max(x, y) * a;
//        else {
//            if(2*a >= b) ans = min(x, y) * b + abs(x-y) * a;
//            else ans = (x + y) * a;
//        }
        cout << ans << "\n";
    }
}
