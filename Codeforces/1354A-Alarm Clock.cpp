#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll a, b, c, d, ans;
        cin >> a >> b >> c >> d;
        if(a <= b) ans = b;
        else{
            if(c <= d) ans = -1L;
            else ans = ceil(((a-b)*1.0)/(c-d)) * c + b;
        }
        cout << ans << "\n";
    }
}
