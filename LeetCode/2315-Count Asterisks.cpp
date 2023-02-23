#include <bits/stdc++.h>
#define ll long long

using namespace std;

int countAsterisks(string s)
{
    int ans = 0, cnt = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '|') cnt++;
        if(!(cnt%2) && s[i] == '*') ans++;
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    int ans = countAsterisks(s);
    cout << ans << "\n";
}
