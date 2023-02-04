#include <bits/stdc++.h>

using namespace std;

vector<int> getMaximumXor(vector<int>& nums, int maximumBit)
{
    int k = pow(2, maximumBit) - 1;
    vector<int> ans;
    int xorSum = 0;
    for(int i = 0; i < nums.size(); i++){
        xorSum ^= nums[i];
        ans.push_back((xorSum^k));
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> nums;
    int maximumBit;
    for(int i = 0; i < 4; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    cin >> maximumBit;
    vector<int> ans = getMaximumXor(nums, maximumBit);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}

/*
0 1 1 3
2

2 3 4 7
3
*/
