#include <bits/stdc++.h>
#define ll long long

using namespace std;

string freqAlphabets(string s)
{
    string ans = "";
    for(int i=s.size()-1; i>=0; i--){
        if(s[i] == '#') ans += (((s[--i]-'0') + (s[--i]-'0') * 10) - 1) + 'a';
        else ans += (s[i]-'0') -1 + 'a';
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string s;
    cin >> s;
    string ans = freqAlphabets(s);
    cout << ans << "\n";
}
