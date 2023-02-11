#include <bits/stdc++.h>

using namespace std;

int xorBeauty(vector<int>& nums)
{
    int xorSum = 0;
    for(int i = 0; i < nums.size(); i++) xorSum ^= nums[i];
    return xorSum;
}

int main()
{
    vector<int> nums;
    for(int i = 0; i < 10; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int ans = xorBeauty(nums);
    cout << ans << "\n";
}

/*
15 45 20 2 34 35 5 44 32 30
*/
