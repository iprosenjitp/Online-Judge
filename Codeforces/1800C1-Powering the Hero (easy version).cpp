#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        priority_queue<ll> q;
        int n;
        cin >> n;
        ll ans = 0;
        for(int i = 0; i < n; i++){
            ll num;
            cin >> num;
            if(num) q.push(num);
            else{
                if(q.empty()) continue;
                ans += q.top();
                q.pop();
            }
        }
        cout << ans << "\n";
    }
}
