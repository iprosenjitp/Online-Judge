#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll a, b, c;
        cin >> a >> b >> c;
        ll x = a*b;
        for(ll i = x; i <= c; i += x){
            cout << i << "\n";
        }
    }
}
