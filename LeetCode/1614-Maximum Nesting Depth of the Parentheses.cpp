#include <bits/stdc++.h>
#define ll long long

using namespace std;

int maxDepth(string s)
{
    int ans = 0, cnt = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(') cnt++;
        if(s[i] == ')') cnt--;
        if(cnt > ans) ans = cnt;
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    int ans = maxDepth(s);
    cout << ans << "\n";
}
