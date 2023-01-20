#include <iostream>
#include <vector>

using namespace std;

vector<int> runningSum(vector<int>& nums)
{
    for(int i = 1; i < nums.size(); i++) nums[i] += nums[i-1];
    return nums;
}

int main()
{
    vector<int> nums;
    for(int i = 0; i < 5; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    vector<int> ans = runningSum(nums);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << "\n";

    return 0;
}

