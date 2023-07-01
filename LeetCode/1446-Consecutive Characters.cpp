#include <bits/stdc++.h>
#define ll long long

using namespace std;

int maxPower(string s)
{
    int n = s.size(), ans = 1, curr = 1;
    for(int i = 1; i < n; i++){
        if(s[i] != s[i-1]) ans = max(ans, curr), curr = 1;
        else curr++;
    }
    return max(ans, curr);
}

int main()
{
    string s;
    cin >> s;
    int ans = maxPower(s);
    cout << ans << "\n";
}
