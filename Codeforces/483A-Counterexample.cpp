#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll l, r;
    cin >> l >> r;
    if(l%2) l++;
    if(l+2 > r) cout << "-1\n";
    else cout << l << " " << l+1 << " " << l+2 << "\n";
}
