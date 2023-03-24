#include <bits/stdc++.h>
#define ll long long

using namespace std;

string reverseString(string s)
{
    string ans = "";
    for(int i = s.size()-1; i >= 0; i--) ans += s[i];
    return ans;
}

int main()
{
    int t;
    cin >> t;
    getchar();
    while(t--){
        string s, w = "";
        vector<string> ans;
        getline(cin, s);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' ') {
                w = reverseString(w);
                ans.push_back(w);
                w = "";
            }
            else w += s[i];
        }
        w = reverseString(w);
        ans.push_back(w);
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}
