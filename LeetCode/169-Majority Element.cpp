#include <bits/stdc++.h>
#define ll long long

using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size();
    int ans, votes = 0;
    for(int i = 0; i < n; i++){
        if(!votes){
            ans = nums[i];
            votes = 1;
        }
        else{
            if(nums[i] == ans) votes++;
            else votes--;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums(3);
    for(int i = 0; i < nums.size(); i++) cin >> nums[i];
    int ans = majorityElement(nums);
    cout << ans << "\n";
}
