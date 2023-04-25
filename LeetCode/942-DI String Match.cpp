#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> diStringMatch(string s)
{
    int i = 0, j = s.size();
    vector<int> ans;
    for(int x = 0; x < s.size(); x++){
        if(s[x] == 'I') {
            ans.push_back(i);
            i++;
        }
        else {
            ans.push_back(j);
            j--;
        }
    }
    ans.push_back(i);
    return ans;
}

int main()
{
    string s;
    cin >> s;
    vector<int> ans = diStringMatch(s);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}
