#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sqrtn = sqrt(n);
        if(sqrtn*sqrtn == n) cout << "YES\n";
        else cout << "NO\n";
    }
}
