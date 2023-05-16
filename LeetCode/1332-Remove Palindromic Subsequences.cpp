#include <bits/stdc++.h>
#define ll long long

using namespace std;

int removePalindromeSub(string s)
{
    int len = s.size();
    for(int i = 0; i < len; i++)
        if(s[i] != s[len-1-i]) return 2;
    return 1;
}

int main()
{
    string s;
    cin >> s;
    int ans = removePalindromeSub(s);
    cout << ans << "\n";
}
