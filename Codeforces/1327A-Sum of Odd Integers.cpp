#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        ll sum = pow(k, 2);
        if(n >= sum && n%2L == k%2L) cout << "YES\n";
        else cout << "NO\n";
    }
}
