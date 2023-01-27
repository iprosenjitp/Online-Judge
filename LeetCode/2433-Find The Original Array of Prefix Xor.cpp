#include <bits/stdc++.h>

using namespace std;

vector<int> findArray(vector<int>& pref)
{
    vector<int> ans(0, 0);
    int xorSum = 0;
    for(int i = 0; i < pref.size(); i++){
        ans.push_back(xorSum^pref[i]);
        xorSum ^= ans[i];
    }
    return ans;
}

int main()
{
    vector<int> V;
    for(int i = 0; i < 6; i++){
        int n;
        cin >> n;
        V.push_back(n);
    }
    vector<int> ans = findArray(V);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
}
