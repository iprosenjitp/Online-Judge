#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        n = n/2;
        if(n%2) cout << "NO\n";
        else {
            cout << "YES\n";
            for(int i = 0, j = 2; i < n; i++, j += 2) cout << j << " ";
            ll evenSum = n * (n+1);
            for(int i = 0, j = 1; i < n-1; i++, j += 2) cout << j << " ";
            ll oddSum = pow(n-1, 2);
            cout << evenSum-oddSum << "\n";
        }
    }
}
