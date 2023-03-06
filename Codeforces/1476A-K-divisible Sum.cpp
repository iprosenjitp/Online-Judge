#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n, k, ans;
        cin >> n >> k;
        if(n > k) k *= n/k + (n%k != 0);
        ans = (k/n) + (k%n != 0);
        cout << ans << "\n";
    }
}
