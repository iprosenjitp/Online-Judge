#include <bits/stdc++.h>

using namespace std;

string sortSentence(string s)
{
    string ans = "";
    string word = "";
    vector<string> V(10, "0");
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ') continue;
        if(s[i] >= '1' && s[i] <= '9'){
            V[s[i] - '1'] = word;
            word = "";
        }
        else word += s[i];
    }
    for(int i = 0; V[i] != "0"; i++) {
        if(i) ans += " ";
        ans += V[i];
    }
    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = sortSentence(s);
    cout << ans << "\n";
}
