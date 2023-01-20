#include <iostream>

using namespace std;

vector<int> getConcatenation(vector<int>& nums)
{
    int len = nums.size();
    for(int i = 0; i < len; i++){
        nums.push_back(nums[i])
    }
    return nums;
}

int main()
{
    vector<int> nums;
    for(int i = 0; i < 6; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    vector<int> ans = getConcatenation(nums);
    cout << "[" << ans[0];
    for(int i = 1; i < ans.size(); i++){
        cout << "," << ans[i];
    }
    cout << "]\n";

    return 0;
}

