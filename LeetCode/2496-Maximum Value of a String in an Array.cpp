#include <bits/stdc++.h>
#define ll long long

using namespace std;

int maximumValue(vector<string>& strs)
{
    int ans = 0;
    for(int i = 0; i < strs.size(); i++){
        string s = strs[i];
        int len = s.size();
        int flag = 1;
        for(int i = 0; i < len; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                ans = max(ans, len);
                flag = 0;
                break;
            }
        }
        if(flag) ans = max(ans, stoi(s));
    }
    return ans;
}

int main()
{
    vector<string> strs(5);
    for(int i = 0; i < strs.size(); i++) cin >> strs[i];
    int ans = maximumValue(strs);
    cout << ans << "\n";
}

/**
alic3 bob 3 4 00000
*/
