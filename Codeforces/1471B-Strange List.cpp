#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n, x, s = 0, j = 1;
        cin >> n >> x;
        vector<ll> A(n);
        for(ll i = 0; i < n; i++) cin >> A[i];
        for(ll i = 0; A[i]%j == 0; i = i%n){
            s = s + A[i];
            if(i+1 == n) j = j*x;
            i++;
        }
        cout << s << "\n";
    }
}
