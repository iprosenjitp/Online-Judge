#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> executeInstructions(int n, vector<int>& startPos, string s)
{
    int m = s.size();
    vector<int> ans(m);
    for(int i = 0; i < m; i++){
        int r = startPos[0], c = startPos[1], cnt = 0;
        for(int j = i; j < m; j++){
            if(s[j] == 'L') c--;
            else if(s[j] == 'R') c++;
            else if(s[j] == 'U') r--;
            else r++;
            if(r < 0 || r >= n || c < 0 || c >= n) break;
            cnt++;
        }
        ans[i] = cnt;
    }
    return ans;
}

int main()
{
    int n;
    vector<int> startPos(2);
    string s;
    cin >> n;
    for(int i = 0; i < 2; i++) cin >> startPos[i];
    cin >> s;
    vector<int> ans = executeInstructions(n, startPos, s);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}

/**
3
0 1
RRDDLU
*/
