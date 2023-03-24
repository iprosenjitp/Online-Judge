#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<vector<int>> increaseRow(vector<vector<int>>& V, int row)
{
    for(int i = 0; i < V[0].size(); i++) V[row][i]++;
    return V;
}

vector<vector<int>> increaseCol(vector<vector<int>>& V, int col)
{
    for(int i = 0; i < V.size(); i++) V[i][col]++;
    return V;
}

int oddCells(int m, int n, vector<vector<int>>& indices)
{
    vector<vector<int>> V(m, vector<int> (n, 0));
    for(int i = 0; i < indices.size(); i++){
        V = increaseRow(V, indices[i][0]);
        V = increaseCol(V, indices[i][1]);
    }
    int cntOdd = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(V[i][j]%2) cntOdd++;
        }
    }
    return cntOdd;
}

int main()
{
    int m, n;
    vector<vector<int>> indices(2);
    cin >> m >> n;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            int n;
            cin >> n;
            indices[i].push_back(n);
        }
    }
    int ans = oddCells(m, n, indices);
    cout << ans << "\n";
}

/**
2 3
0 1
1 1

*/
