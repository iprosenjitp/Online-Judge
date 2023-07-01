#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> A(n);
    for(ll i = 0LL; i < n; i++) cin >> A[i];
    sort(A.rbegin(), A.rend());
    for(ll i = 1LL; i < n; i++) A[i] += A[i-1];
    for(ll i = 0LL; i < q; i++){
        ll x, y;
        cin >> x >> y;
        ll ans = A[x-1];
        if(x != y) ans -= A[x-y-1];
        cout << ans << "\n";
    }
}
