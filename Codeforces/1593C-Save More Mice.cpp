#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<ll> A(k);
        for(ll i = 0L; i < k; i++) cin >> A[i];
        sort(A.rbegin(), A.rend());
        ll x = 0L;
        for(ll i = 0L; i < k; i++){
            A[i] = n-A[i] + x;
            x = A[i];
        }
        ll lb = lower_bound(A.begin(), A.end(), n) - A.begin();
        cout << lb << "\n";
    }
}
