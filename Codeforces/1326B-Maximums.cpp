#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, a, x = 0L;
    cin >> n;
    for(int i = 0; i < n; i++){
        ll b;
        cin >> b;
        a = b + x;
        cout << a << " ";
        x = max(x, a);
    }
    cout << "\n";
}
