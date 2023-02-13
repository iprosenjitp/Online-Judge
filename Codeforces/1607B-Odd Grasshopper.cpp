#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll x, n, val = 0L, ans;
        cin >> x >> n;
        ll mod = n%4;
        if(!mod) ans = x;
        else{
            if(x%2){
                for(ll i = n; i > n-mod; i--){
                    if(i%4 == 0 || i%4 == 1) val += i;
                    else val -= i;
                }
            }
            else{
                for(ll i = n; i > n-mod; i--){
                    if(i%4 == 0 || i%4 == 1) val -= i;
                    else val += i;
                }
            }
            ans = x + val;
        }

        cout << ans << "\n";
    }
}
