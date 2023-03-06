#include <bits/stdc++.h>
#define ll long long

using namespace std;

int findNegative(vector<int>& V, int target)
{
    int left = 0, right = V.size();
    while(left < right){
        int mid = (left+right) / 2;
        if(V[mid] >= target) left = mid+1;
        else right = mid;
    }
    return left;
}

int countNegatives(vector<vector<int>>& grid)
{
    int ans = 0;
    for(int i = 0; i < grid.size(); i++){
        int x = findNegative(grid[i], 0);
        ans += grid[i].size() - x;
    }
    return ans;
}

int main()
{
    vector<vector<int>> grid(4);
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            int n;
            cin >> n;
            grid[i].push_back(n);
        }
    }
    int ans = countNegatives(grid);
    cout << ans << "\n";
}

/*
4 3 2 -1
3 2 1 -1
1 1 -1 -2
-1 -1 -2 -3
*/
