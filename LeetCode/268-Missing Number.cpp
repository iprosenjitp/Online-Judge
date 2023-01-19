#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int>& nums)
{
    int xorSum = 0;
    for(int i = 0; i < nums.size(); i++){
        xorSum ^= nums[i];
    }
    for(int i = 0; i < nums.size()+1; i++){
        xorSum ^= i;
    }
    return xorSum;
}

int main()
{
    vector<int> nums;
    for(int i = 0; i < 3; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int ans = missingNumber(nums);
    cout << ans << "\n";

    return 0;
}

