#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, i, a[100001], q, x;

int main()
{
    for(cin >> n; i < n; i++) cin >> a[i];
    sort(a, a+n);
    cin >> q;
    while(q--) cin >> x, cout << upper_bound(a, a+n, x) - a << "\n";
}
