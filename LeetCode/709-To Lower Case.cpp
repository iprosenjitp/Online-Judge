#include <bits/stdc++.h>
#define ll long long

using namespace std;

string toLowerCase(string s)
{
    for(int i = 0; i < s.length(); i++)
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] = 'a' + (s[i] - 'A');
    return s;
}

int main()
{
    string s;
    cin >> s;
    string ans = toLowerCase(s);
    cout << ans << "\n";
}
