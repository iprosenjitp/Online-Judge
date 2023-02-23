#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    map<string, string> M;
    string ans = "";
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        string s1, s2;
        cin >> s1 >> s2;
        M[s1] = s2;
    }
    for(int i = 0; i < n; i++){
        string w;
        cin >> w;
        if(w.length() <= M[w].length()) ans += w;
        else ans += M[w];
        ans += " ";
    }
    cout << ans << "\n";
}
