#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s, ans = "";
        cin >> s;
        for(int i = s.length()-1; i >= 0; i--) ans += s[i];
        cout << ans << "\n";
    }
}
