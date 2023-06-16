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
        vector<int> A(n);
        int mini = INT_MAX;
        int maxi = -1e9;
        for(int i = 0; i < n; i++) {
            cin >> A[i];
            mini = min(mini, A[i]);
            maxi = max(maxi, A[i]);
        }
        int ans = maxi-mini;
        for(int i = 0; i < n; i++){
            int x = abs(A[i] - mini);
            if(abs(x)) ans = __gcd(ans, x);
        }
        if(ans) cout << ans << "\n";
        else cout << "-1\n";
    }
}
