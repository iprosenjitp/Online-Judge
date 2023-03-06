#include <bits/stdc++.h>
#define ll long long

using namespace std;

int numsOfOnes(vector<int>& A)
{
    int left = 0, right = A.size();
    while(left < right){
        int mid = (left+right) / 2;
        if(A[mid] == 0) right = mid;
        else left = mid+1;
    }
    return left;
}

vector<int> kWeakestRows(vector<vector<int>>& mat, int k)
{
    vector<int> ans;
    vector<pair<int, int>> p;
    for(int i = 0; i < mat.size(); i++){
        int x = numsOfOnes(mat[i]);
        p.push_back({x, i});
    }
    sort(p.begin(), p.end());
    for(int i = 0; i < k; i++) ans.push_back(p[i].second);
    return ans;
}

int main()
{
    vector<vector<int>> mat(5);
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int n;
            cin >> n;
            mat[i].push_back(n);
        }
    }
    int k;
    cin >> k;
    vector<int> ans = kWeakestRows(mat, k);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}

/**
1 1 0 0 0
1 1 1 1 0
1 0 0 0 0
1 1 0 0 0
1 1 1 1 1
*/
