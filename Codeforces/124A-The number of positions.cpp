#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int ans;
//    ans = n-a;
//    if(a+b < n) ans -= ((n-b-1) - a);
    ans = min(n-a, b+1);
    cout << ans << "\n";
}
