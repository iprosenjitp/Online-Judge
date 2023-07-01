#include <bits/stdc++.h>
#define ll long long

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    int n = strs.size();
    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last = strs[n-1];
    int m = min(first.size(), last.size());
    string ans = "";
    for(int i = 0; i < m; i++){
        if(first[i] != last[i]) break;
        ans += first[i];
    }
    return ans;
}

int main()
{
    vector<string> strs(3);
    for(int i = 0; i < strs.size(); i++) cin >> strs[i];
    string ans = longestCommonPrefix(strs);
    cout << ans << "\n";
}

/**
flower flow flight
*/
