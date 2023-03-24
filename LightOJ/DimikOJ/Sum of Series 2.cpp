#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll fact(ll n)
{
    ll product = 1L;
    for(ll i = 1L; i <= n; i++) product *= i;
    return product;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        double sum = 0.0;
        for(ll i = 1; i <= n; i++){
            sum += ((double)i / fact(i));
        }
        cout << fixed << setprecision(4) << sum << "\n";
    }
}
