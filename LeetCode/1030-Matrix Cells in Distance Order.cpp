#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter)
{
    vector<pair<int, vector<int>>> V;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            int dist = abs(rCenter-i) + abs(cCenter-j);
            V.push_back({dist, {i, j}});
        }
    }
    sort(V.begin(), V.end());
//    for(auto i : V) cout << i.first << " [" << i.second[0] << ", " << i.second[1] << "]\n";
    vector<vector<int>> ans(rows*cols, vector<int> (2));
    int ind = 0;
    for(auto i : V) {
        ans[ind][0] = i.second[0];
        ans[ind][1] = i.second[1];
        ind++;
    }
    return ans;
}

int main()
{
    int rows, cols, rCenter, cCenter;
    cin >> rows >> cols >> rCenter >> cCenter;
    vector<vector<int>> ans = allCellsDistOrder(rows, cols, rCenter, cCenter);
//    cout << ans.size() << " " << ans[0].size() << "\n";
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}

/**
1 2 0 0
2 3 1 2
*/
