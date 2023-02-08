#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(vector<int>& nums)
{
    vector<vector<int>> ans(pow(2, nums.size()));
    for(int i = 0; i < pow(2, nums.size()); i++){
        for(int j = 0; j <= 10; j++){
            if(i & (1 << j)){
                ans[i].push_back(nums[j]);
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums;
    for(int i = 0; i < 3; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    vector<vector<int>> ans = subsets(nums);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}

/*
1 2 3
*/
