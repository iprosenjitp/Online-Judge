#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<string> divideString(string s, int k, char fill)
{
    vector<string> ans;
    string group = "";
    for(int i = 0; i < s.size(); i++){
        if(i && i%k == 0) {
            ans.push_back(group);
            group = "";
        }
        group += s[i];
    }
    if(group.size() != k){
        for(int i = group.size(); i < k; i++) group += fill;
    }
    ans.push_back(group);
    return ans;
}

int main()
{
    string s;
    cin >> s;
    int k; cin >> k;
    char fill; cin >> fill;
    vector<string> ans = divideString(s, k, fill);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}
