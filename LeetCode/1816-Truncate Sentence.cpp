#include <bits/stdc++.h>
#define ll long long

using namespace std;

string truncateSentence(string s, int k)
{
    int cnt = 0;
    string ans = "";
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') cnt++;
        if(cnt == k) break;
        ans += s[i];
    }
    return ans;
}

int main()
{
    string str;
    getline(cin, str);
    int k;
    cin >> k;
    string ans = truncateSentence(str, k);
    cout << ans << "\n";
}
