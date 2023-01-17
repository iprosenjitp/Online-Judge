#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int subsetXORSum(vector<int>& nums)
{
    int ans = 0;
    int len = nums.size();
    int numOfSubset = pow(2, len);
    for(int i = 0; i < numOfSubset; i++){
        int xorSum = 0;
        for(int j = len-1; j >= 0; j--){
            if(i & (1 << j)) xorSum ^= nums[j];
        }
        ans += xorSum;
    }
    return ans;
}

int main()
{
    vector<int> nums;
    int num;
    for(int i = 0; i < 6; i++){
        cin >> num;
        nums.push_back(num);
    }
    int ans = subsetXORSum(nums);
    cout << ans << "\n";

    return 0;
}

