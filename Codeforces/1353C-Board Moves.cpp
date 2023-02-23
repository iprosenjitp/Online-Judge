#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n, ans = 0L;
        cin >> n;
        for(ll i = 1, j = 8; i <= n/2; i++, j += 8) ans += i*j;
        cout << ans << "\n";
    }
}
