#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> V(n);
    for(int i = 0; i < n; i++) cin >> V[i];
    sort(V.begin(), V.end());
    cout << V[n-1] << "\n";
}
