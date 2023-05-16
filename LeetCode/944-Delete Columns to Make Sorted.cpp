#include <bits/stdc++.h>
#define ll long long

using namespace std;

int minDeletionSize(vector<string>& strs)
{
    int cnt = 0;
    for(int i = 0; i < strs[0].size(); i++){
        for(int j = 0; j < strs.size()-1; j++){
            if(strs[j][i] > strs[j+1][i]) {
                cnt++;
                break;
            }
        }
    }
    return cnt;
}

int main()
{
    vector<string> strs;
    string str;
    for(int i = 0; i < 3; i++){
        cin >> str;
        strs.push_back(str);
    }
    int ans = minDeletionSize(strs);
    cout << ans << "\n";
}


/**
cba daf ghi
zyx wvu tsr
*/
