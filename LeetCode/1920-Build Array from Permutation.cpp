#include <iostream>
#include <vector>

using namespace std;

vector<int> buildArray(vector<int>& nums)
{
    vector<int> ans;
    for(int i = 0; i < nums.size(); i++){
        ans.push_back(nums[nums[i]]);
    }
    return ans;
}

int main()
{
    vector<int> nums;
    for(int i = 0; i < 6; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    vector<int> ans = buildArray(nums);
    cout << "[" << ans[0];
    for(int i = 1; i < ans.size(); i++){
        cout << "," << ans[i];
    }
    cout << "]\n";

    return 0;
}

