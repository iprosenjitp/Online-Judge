#include <bits/stdc++.h>
#define ll long long

using namespace std;

char repeatedCharacter(string s)
{
    vector<int> V(26);
    int i;
    for(i = 0; i < s.size(); i++){
        V[s[i]-'a']++;
        if(V[s[i]-'a'] == 2) break;
    }
    return s[i];
}

int main()
{
    string s;
    cin >> s;
    char ans = repeatedCharacter(s);
    cout << ans << "\n";
}
