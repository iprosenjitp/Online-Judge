#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, maxi = 0, ans = 0;
    cin >> n;
    vector<int> V(n);
    for(int i = 0; i < n; i++) {
        cin >> V[i];
        if(V[i] > maxi) maxi = V[i];
    }
    for(int i = 0; i < n; i++)
        ans += maxi-V[i];
    cout << ans << "\n";
}
