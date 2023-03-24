#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n, sum = 0L;
        cin >> n;
        for(int i = 0; i < n-1; i++){
            ll num;
            cin >> num;
            sum += num;
        }
        ll ans = ((n * (n+1)) / 2) - sum;
        cout << ans << "\n";
    }
}
