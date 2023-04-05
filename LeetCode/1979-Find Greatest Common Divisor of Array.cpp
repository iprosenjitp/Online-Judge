#include <bits/stdc++.h>
#define ll long long

using namespace std;

int findGCD(vector<int>& nums)
{
    sort(nums.begin(), nums.end());
    int small = nums[0];
    int large = nums[nums.size()-1];
    return __gcd(large, small);
}

int main()
{
    vector<int> nums;
    int num;
    for(int i = 0; i < 5; i++){
        cin >> num;
        nums.push_back(num);
    }
    int ans = findGCD(nums);
    cout << ans << "\n";
}

/**
2 5 6 9 10
*/
