#include <bits/stdc++.h>
#define ll long long

using namespace std;

int upperBound(vector<int>& nums, int target)
{
    int left = 0, right = nums.size();
    while(left < right){
        int mid = (left+right) / 2;
        if(nums[mid] > target) right = mid;
        else left = mid+1;
    }
    return left;
}

vector<int> answerQueries(vector<int>& nums, vector<int>& queries)
{
    vector<int> ans;
    sort(nums.begin(), nums.end());
    for(int i = 1; i < nums.size(); i++) nums[i] += nums[i-1];
    for(int i = 0; i < queries.size(); i++){
        int x = upperBound(nums, queries[i]);
        ans.push_back(x);
    }
    return ans;
}

int main()
{
    vector<int> nums, queries;
    for(int i = 0; i < 4; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    for(int i = 0; i < 1; i++){
        int query;
        cin >> query;
        queries.push_back(query);
    }
    vector<int> ans = answerQueries(nums, queries);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}

/**
4 5 2 1
3 10 21

2 3 4 5
1
*/
