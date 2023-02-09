#include <bits/stdc++.h>
#define ll long long

using namespace std;

// TLE
//vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries)
//{
//    vector<int> ans;
//    for(int i = 0; i < queries.size(); i++){
//        ll xorSum = 0;
//        for(int j = queries[i][0]; j <= queries[i][1]; j++)
//            xorSum ^= arr[j];
//        ans.push_back(xorSum);
//    }
//    return ans;
//}

vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
    vector<int> ans;
    for(int i = 1; i < arr.size(); i++){
        arr[i] = arr[i]^arr[i-1];
    }
    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "\n";

    for(int i = 0; i < queries.size(); i++){
        int left = queries[i][0];
        int right = queries[i][1];
        if(left == 0) ans.push_back(arr[right]);
        else ans.push_back(arr[left-1]^arr[right]);
    }
    return ans;
}

int main()
{
    vector<int> arr;
    for(int i = 0; i < 4; i++){
        int val;
        cin >> val;
        arr.push_back(val);
    }
    vector<vector<int>> queries(4);
    for(int i = 0; i < 4; i++){
        int left, right;
        cin >> left >> right;
        queries[i].push_back(left);
        queries[i].push_back(right);
    }
    vector<int> ans = xorQueries(arr, queries);
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << "\n";
}

/*
4 8 2 10
2 3
1 3
0 0
0 3
*/


