#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> V(n);
        for(int i = 0; i < n; i++) cin >> V[i];
        sort(V.begin(), V.end());
        ll coin = 0;
        for(int i = 0; i < n; i++){
            int lb = lower_bound(V.begin(), V.end(), V[i]) - V.begin();
            coin = max(coin, (n-lb)*V[i]);
        }
        cout << coin << "\n";
    }
}
