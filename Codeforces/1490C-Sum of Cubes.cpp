#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    vector<ll> cube(10001);
    for(int i = 0L; i < cube.size(); i++) cube[i] = pow(i, 3);

    int t;
    cin >> t;
    while(t--){
        ll x;
        bool ans = false;
        cin >> x;
        for(int i = 1; i < cube.size(); i++){
            ll a = cube[i];
            if(a >= x) break;
            ll b = x-a;
            bool bs = binary_search(cube.begin(), cube.end(), b);
            if(bs){
                ans = true;
                break;
            }
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
}
