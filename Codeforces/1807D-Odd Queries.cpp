#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, q;
ll A[200005];

int main()
{
    ll t;
    cin >> t;
    while(t--){
        cin >> n >> q;
        for(int i = 1; i <= n; i++){
            ll num;
            cin >> num;
            A[i] = num + A[i-1];
        }
        for(int i = 0; i < q; i++){
            ll l, r, k;
            cin >> l >> r >> k;
            ll x = A[l-1] + ((r-l)+1)*k;
            ll ans = x + (A[n]-A[r]);
            if(ans%2) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
