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
        if(a%c) a = a + (c - a%c);
        for(ll i = a; i <= b; i += c) cout << i << "\n";
        cout << "\n";
    }
}
