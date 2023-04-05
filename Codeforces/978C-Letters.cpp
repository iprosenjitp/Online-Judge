#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n, m, ai, bi;
    cin >> n >> m;
    vector<ll> A(n+1, 0);
    for(int i = 1; i <= n; i++) {
        cin >> ai;
        A[i] = ai + A[i-1];
    }
    for(int i = 0; i < m; i++) {
        cin >> bi;
        int x = lower_bound(A.begin(), A.end(), bi) - A.begin();
        cout << x << " " << bi-A[x-1] << "\n";
    }
}
