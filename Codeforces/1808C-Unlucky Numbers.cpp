#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll l, r;
        cin >> l >> r;
        if(r-10000L > l) l = r-10000L;
        ll diff = 10;
        ll ans = l;
        for(ll i = l; i <= r; i++){
            vector<ll> V;
            ll n = i;
            while(n){
                V.push_back(n%10L);
                n /= 10L;
            }
            sort(V.begin(), V.end());
            int currDiff = V[V.size()-1] - V[0];
            if(currDiff < diff){
                diff = currDiff;
                ans = i;
            }
            if(diff == 0) break;
        }
        cout << ans << "\n";
    }
}
