#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        string s;
        cin >> n >> a >> b;
        cin >> s;
        int ans = n*a;
        int m = unique(s.begin(), s.end()) - s.begin();
        ans += max(n*b, ((m/2)+1)*b);
        cout << ans << "\n";
    }
}
