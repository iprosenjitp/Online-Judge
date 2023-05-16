#include <bits/stdc++.h>
#define ll long long

using namespace std;

int countGoodSubstrings(string s)
{
    if(s.size() < 3) return 0;
    char a = s[0], b = s[1], c = s[2];
    int cnt = 0;
    for(int i = 3; i < s.size(); i++){
        if(a != b && b != c && c != a) cnt++;
        a = b;
        b = c;
        c = s[i];
    }
    if(a != b && b != c && c != a) cnt++;
    return cnt;
}

int main()
{
    string s;
    cin >> s;
    int ans = countGoodSubstrings(s);
    cout << ans << "\n";
}
