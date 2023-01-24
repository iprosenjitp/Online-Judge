#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n;
        ll ans;
        cin >> n;
        if(n <= 6) {
            cout << "15\n";
            continue;
        }
        if(n%2) n++;
        ans = n*3 - n/2;
        cout << ans << "\n";
    }

}
