#include <bits/stdc++.h>

using namespace std;

int balancedStringSplit(string s)
{
    int cntL = 0, cntR = 0, ans = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'L') cntL++;
        else cntR++;
        if(cntL == cntR) ans++;
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    int ans = balancedStringSplit(s);
    cout << ans << "\n";
}
