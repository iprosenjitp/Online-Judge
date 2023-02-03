#include <bits/stdc++.h>

using namespace std;

int maximumXOR(vector<int>& nums)
{
    int ans = 0;
    for(int i = 0; i < nums.size(); i++) ans |= nums[i];
    return ans;
}

int main()
{
    vector<int> nums;
    for(int i = 0; i < 5; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int ans = maximumXOR(nums);
    cout << ans << "\n";
}
