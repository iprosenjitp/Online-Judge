#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        if(a > b) swap(a, b);
        if(2*a <= b) cout << a;
        else cout << (a+b)/3L;
        cout << "\n";
    }
}
