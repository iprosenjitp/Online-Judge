#include <bits/stdc++.h>

using namespace std;

vector<string> letterCasePermutation(string s)
{
    vector<int> ind;
    vector<string> ans;
    for(int i = 0; i < s.length(); i++)
        if(isalpha(s[i])) ind.push_back(i);
    for(int i = (1 << ind.size())-1; i >= 0; i--){
        for(int j = 0; j < ind.size(); j++){
            if(i & (1 << j)) s[ind[j]] = tolower(s[ind[j]]);
            else s[ind[j]] = toupper(s[ind[j]]);
        }
        ans.push_back(s);
    }
    return ans;
}

int main()
{
    string S;
    cin >> S;
    vector<string> ans = letterCasePermutation(S);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}
