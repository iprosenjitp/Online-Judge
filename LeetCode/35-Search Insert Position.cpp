#include <bits/stdc++.h>
#define ll long long

using namespace std;

int searchInsert(vector<int>& nums, int target)
{
    int left = 0, right = nums.size();
    while(left < right){
        int mid = (left+right) / 2;
        if(nums[mid] >= target) right = mid;
        else left = mid+1;
    }
    return left;
}

int main()
{
    vector<int> nums;
    int target;
    for(int i = 0; i < 4; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    cin >> target;
    int ans = searchInsert(nums, target);
    cout << ans << "\n";
}

/**
1 3 5 6
5
*/
