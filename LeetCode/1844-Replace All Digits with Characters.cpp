#include <bits/stdc++.h>
#define ll long long

using namespace std;

string replaceDigits(string s)
{
    for(int i = 1; i < s.length(); i += 2)
        s[i] = s[i-1] + (s[i] - '0');
    return s;
}

int main()
{
    string s;
    cin >> s;
    string ans = replaceDigits(s);
    cout << ans << "\n";
}
