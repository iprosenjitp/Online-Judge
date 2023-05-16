#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n, m, e;
    cin >> n;
    vector<ll> V(n+1);

    for(int i = 0; i < n; i++) {
        cin >> e;
        V[e] = i;
    }
    cin >> m;
    ll left = 0L, right = 0L;
    for(int i = 0; i < m; i++){
        cin >> e;
        left += V[e]+1;
        right += n-V[e];
    }
    cout << left << " " << right << "\n";
}
