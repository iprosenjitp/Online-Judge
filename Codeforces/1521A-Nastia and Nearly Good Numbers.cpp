#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll a, b;
        ll x, y, z;
        cin >> a >> b;
        if(b == 1) cout << "NO\n";
        else {
            cout << "YES\n";
            cout << a << " " << a*b << " " << a * (b+1) << "\n";
        }
    }
}
