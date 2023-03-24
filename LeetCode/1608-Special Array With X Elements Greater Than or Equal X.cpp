#include <bits/stdc++.h>
#define ll long long

using namespace std;

int lowerBound(vector<int>& nums, int target)
{
    int left = 0, right = nums.size();
    while(left < right){
        int mid = (left+right)/ 2;
        if(nums[mid] >= target) right = mid;
        else left = mid+1;
    }
    return left;
}

int specialArray(vector<int>& nums)
{
    sort(nums.begin(), nums.end());
    for(int i = 0; i <= nums.back(); i++){
        int x = lowerBound(nums, i);
        if(i == (nums.size() - x)) return i;
    }
    return -1;
}

int main()
{
    vector<int> nums;
    for(int i = 0; i < 5; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int ans = specialArray(nums);
    cout << ans << "\n";
}

/**
0 4 3 0 4
*/
