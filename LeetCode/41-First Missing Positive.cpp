#include <bits/stdc++.h>
#define ll long long

using namespace std;

int firstMissingPositive(vector<int>& nums) {
    int n = nums.size(), ans = 1;
    unordered_set<int> seen;
    for(int i = 0; i < n; i++){
        if(nums[i] == ans){
            ans++;
            while(seen.count(ans)) ans++;
        }
        else seen.insert(nums[i]);
    }
    return ans;
}

int main()
{
    vector<int> nums(3);
    for(int i = 0; i < nums.size(); i++) cin >> nums[i];
    int ans = firstMissingPositive(nums);
    cout << ans << "\n";
}

/**
1 2 0
*/
