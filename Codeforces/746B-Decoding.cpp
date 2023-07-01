#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    for(int i = 0; i < n; i++) ans += 'a';
    int m = n/2;
    if(n%2 == 0) m--;
    int l = m-1, r = m+1;
    ans[m] = s[0];
    for(int i = 1; i < s.size(); i++){
        n--;
        if(n%2) ans[r] = s[i], r++;
        else ans[l] = s[i], l--;
    }
    cout << ans << "\n";
}
