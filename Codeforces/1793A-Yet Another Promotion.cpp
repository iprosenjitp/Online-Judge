#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll a, b, n, m;
        cin >> a >> b >> n >> m;
        ll c = n / (m+1);
        ll x = min(c*a*m, c*b*(m+1));
        ll y = n % (m+1) * min(a, b);
        cout << x+y << "\n";
    }
}
