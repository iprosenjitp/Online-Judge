#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen;
    for(int i = 0; i < nums.size(); i++){
        if(seen.count(target - nums[i])) return {i, seen[target-nums[i]]};
        seen[nums[i]] = i;
    }
    return {-1, -1};
}

int main()
{
    vector<int> nums;
    for(int i = 0; i < 4; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int target;
    cin >> target;
    vector<int> ans = twoSum(nums, target);
    cout << "[" << ans[0] << "," << ans[1] << "]\n";
    return 0;
}

