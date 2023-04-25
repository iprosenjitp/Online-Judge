#include <bits/stdc++.h>
#define ll long long

using namespace std;

string destCity(vector<vector<string>>& paths)
{
    unordered_set<string> S;
    int n = paths.size();
    for (int i = 0; i < n; i++)
        S.insert(paths[i][0]);
    string ans;
    for (int i = 0; i < n; i++)
        if(S.find(paths[i][1]) == S.end())
            ans = paths[i][1];
    return ans;
}

int main()
{
    vector<vector<string>> paths(3, vector<string> (2));
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            getline(cin, paths[i][j]);
        }
    }
    string ans = destCity(paths);
    cout << ans << "\n";
}

/**
London
New York
New York
Lima
Lima
Sao Paulo
*/
