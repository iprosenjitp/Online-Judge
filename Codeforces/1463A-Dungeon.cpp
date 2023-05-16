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
        ll sum = a+b+c;
        ll minVal = min(a, min(b, c));
        ll div = sum/9L;
        if(sum%9 || minVal < div) cout << "NO\n";
        else cout << "YES\n";
    }
}
