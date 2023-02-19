#include <bits/stdc++.h>
#define ll long long

using namespace std;

int deleteGreatestValue(vector<vector<int>>& grid)
{
    for(int i = 0; i < grid.size(); i++)
        sort(grid[i].begin(), grid[i].end());
    int sum = 0;
    for(int i = grid[0].size()-1; i >= 0; i--) {
        int maxValue = 0;
        for(int j = 0; j < grid.size(); j++)
            maxValue = max(maxValue, grid[j][i]);
        sum += maxValue;
    }
    return sum;
}

int main()
{
    vector<vector<int>> grid(2);
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            int n;
            cin >> n;
            grid[i].push_back(n);
        }
    }
    int ans = deleteGreatestValue(grid);
    cout << ans << "\n";
}

/*
1 2 4
3 3 1
*/
