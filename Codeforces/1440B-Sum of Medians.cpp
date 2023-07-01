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
        ll len = n*k;
        vector<ll> A(len);
        for(int i = 0; i < len; i++) cin >> A[i];
        ll sum = 0;
        ll x = n/2 + 1;
        for(int i = len-x; k--; i -= x) sum += A[i];
        cout << sum << "\n";
    }
}
