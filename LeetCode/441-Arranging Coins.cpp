#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll arrangeCoins(int n)
{
    ll left = 1, right = n;
    ll ans;
    while(left <= right){
        ll mid = (left+right) / 2;
        if((mid * (mid + 1))/2 <= n) {
            left = mid+1;
            ans = mid;
        }
        else right = mid-1;
    }
    return ans;
}

int main()
{
    ll n;
    cin >> n;
    ll ans = arrangeCoins(n);
    cout << ans << "\n";
}
