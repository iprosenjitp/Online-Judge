#include <bits/stdc++.h>
#define ll long long

using namespace std;

int smallestRangeI(vector<int>& nums, int k)
{
    sort(nums.begin(), nums.end());
    int a = nums[0]+k;
    int b = nums[nums.size()-1]-k;
    if(a >= b) return 0;
    else return b-a;
}

int main()
{
    vector<int> nums;
    int num, k;
    for(int i = 0; i < 2; i++){
        cin >> num;
        nums.push_back(num);
    }
    cin >> k;
    int ans = smallestRangeI(nums, k);
    cout << ans << "\n";
}

/**
1 3 6
3
*/
