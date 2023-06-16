#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        vector<char> ans;
        ans.push_back(s[0]);
        for(int i = 1; i < n; i++){
            if(ans.empty() || s[i] != 'B') ans.push_back(s[i]);
            else ans.pop_back();
        }
        cout << ans.size() << "\n";
    }
}
