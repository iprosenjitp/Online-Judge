#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool areOccurrencesEqual(string s)
{
    vector<int> V(30, 0);
    for(int i = 0; i < s.size(); i++)
        V[s[i] - 'a']++;
    int flag = 1, val;
    for(int i = 0; i < 26; i++){
        if(V[i] && flag){
            flag = 0;
            val = V[i];
        }
        if(!flag && V[i] && V[i] != val) return false;
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    bool ans = areOccurrencesEqual(s);
    if(ans) cout << "true\n";
    else cout << "false\n";
}
