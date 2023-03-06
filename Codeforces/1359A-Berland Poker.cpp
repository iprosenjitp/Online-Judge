#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m, k, ans;
        cin >> n >> m >> k;
        int x = m - (n/k);
        if(x <= 0) ans = m;
        else ans = n/k - ceil(x*1.0/(k-1));
        cout << ans << "\n";
    }
}
