#include <bits/stdc++.h>

using namespace std;

int maxIn3x3(vector<vector<int>>& grid, int i, int j)
{
    int maxVal = 0;
    for(int x = i; x < i+3; x++){
        for(int y = j; y < j+3; y++){
            if(grid[x][y] > maxVal) maxVal = grid[x][y];
        }
    }
    return maxVal;
}

vector<vector<int>> largestLocal(vector<vector<int>>& grid)
{
    int s = grid.size();
    vector<vector<int>> ans(s-2);
    for(int i = 0; i < s-2; i++){
        for(int j = 0; j < s-2; j++){
            ans[i].push_back(maxIn3x3(grid, i, j));
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> V(4);
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            int n;
            cin >> n;
            V[i].push_back(n);
        }
    }
    vector<vector<int>> ans = largestLocal(V);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}
