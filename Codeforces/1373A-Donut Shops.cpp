#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll a, b, c;
        cin >> a >> b >> c;
        if(a < c) cout << "1 ";
        else cout << "-1 ";
        if(b*a > c) cout << b << "\n";
        else cout << "-1\n";
    }
}
