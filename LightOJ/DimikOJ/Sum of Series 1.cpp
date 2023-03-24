#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int x, k;
        cin >> x >> k;
        ll ans = 0L;
        for(int i = 0; i <= k; i++){
            ans += pow(x, i);
        }
        cout << "Result = " << ans << "\n";
    }
}
