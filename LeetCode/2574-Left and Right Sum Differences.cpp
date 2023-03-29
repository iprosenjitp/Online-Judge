#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> leftRigthDifference(vector<int>& nums)
{
    int n = nums.size();
    vector<int> leftSum(n, 0), rightSum(n, 0);
    int sum = 0;
    for(int i = 0; i < nums.size(); i++){
        if(!i) continue;
        leftSum[i] = sum+nums[i-1];
        sum += nums[i-1];
    }
    sum = 0;
    for(int i = n-1; i >= 0; i--){
        if(i == n-1) continue;
        rightSum[i] = sum+nums[i+1];
        sum += nums[i+1];
    }
    vector<int> ans;
    for(int i = 0; i < n; i++) ans.push_back(abs(leftSum[i]-rightSum[i]));
    return ans;
}

int main()
{
    vector<int> nums;
    int num;
    for(int i = 0; i < 4; i++){
        cin >> num;
        nums.push_back(num);
    }
    vector<int> ans = leftRigthDifference(nums);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}

/**
10 4 8 3
*/
