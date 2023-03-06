#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int x, y, a;
        cin >> x >> y >> a;
        if(a >= x && a < y) cout << "YES\n";
        else cout << "NO\n";
    }
}
