#include <bits/stdc++.h>

using namespace std;

int toDecimal(vector<vector<int>>& grid, int rowSize, int colSize)
{
    int ans = 0;
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            if(grid[i][j]) ans += pow(2, colSize-j-1);
        }
    }
    return ans;
}

bool colCountBit(vector<vector<int>>& grid, int col, int rowSize)
{
    int cnt = 0;
    for(int i = 0; i < rowSize; i++)
        if(grid[i][col] == 0) cnt++;
    return cnt > rowSize-cnt;
}

void toggleCol(vector<vector<int>>& grid, int col, int rowSize)
{
    for(int i = 0; i < rowSize; i++)
        grid[i][col] ^= 1;
}

void toggleRow(vector<vector<int>>& grid, int row, int colSize)
{
    for(int i = 0; i < colSize; i++)
        grid[row][i] ^= 1;
}

int matrixScore(vector<vector<int>>& grid)
{
    int m = grid.size();
    int n = grid[0].size();
    for(int i = 0; i < m; i++){
        if(grid[i][0] == 0)
            toggleRow(grid, i, n);
    }
    for(int i = 1; i < n; i++){
        if(colCountBit(grid, i, m))
            toggleCol(grid, i, m);
    }
//    for(int i = 0; i < m; i++){
//        for(int j = 0; j < n; j++)
//            cout << grid[i][j] << " ";
//        cout << "\n";
//    }
    int ans = toDecimal(grid, m, n);
    return ans;
}

int main()
{
    vector<vector<int>> grid(3);
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            int val;
            cin >> val;
            grid[i].push_back(val);
        }
    }
    int ans = matrixScore(grid);
    cout << ans << "\n";
}

/*
0 0 1 1
1 0 1 0
1 1 0 0
*/
