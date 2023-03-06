#include <bits/stdc++.h>
#define ll long long

using namespace std;

//int lowerBound(vector<int>& nums, int target)
//{
//    int left = 0, right = nums.size();
//    while(left < right){
//        int mid = (left+right) / 2;
//        if(nums[mid] >= target) right = mid;
//        else left = mid+1;
//    }
//    return left;
//}

int upperBound(vector<int>& nums, int target)
{
    int left = 0, right = nums.size();
    while(left < right){
        int mid = (left+right) / 2;
        if(nums[mid] > target) right = mid;
        else left = mid+1;
    }
    return left;
}

int maximumCount(vector<int>& nums)
{
    int len = nums.size();
    int a = upperBound(nums, -1);
    int b = upperBound(nums, 0);
    int ans = max(a, len-b);
    return ans;
}

int main()
{
    vector<int> nums;
    for(int i = 0; i < 6; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int ans = maximumCount(nums);
    cout << ans << "\n";
}

/*
-2 -1 -1 1 2 3
-3 -2 -1 0 0 1 2
5 20 66 1314
*/
