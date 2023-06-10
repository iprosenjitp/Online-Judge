#include <bits/stdc++.h>
#define ll long long

using namespace std;

int minOperations(vector<string>& logs)
{
    int ans = 0;
    for(int i = 0; i < logs.size(); i++){
        if(logs[i] == "../"){
            if(ans) ans--;
        }
        else if(logs[i] == "./") continue;
        else ans++;
    }
    return ans;
}

int main()
{
    vector<string> logs(5);
    for(int i = 0; i < logs.size(); i++) cin >> logs[i];
    int ans = minOperations(logs);
    cout << ans << "\n";
}

/**
d1/ d2/ ../ d21/ ./
*/
