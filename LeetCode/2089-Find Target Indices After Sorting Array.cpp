#include <bits/stdc++.h>
#define ll long long

using namespace std;

//int lowerBound(vector<int>& nums, int target)
//{
//    int left = 0, right = nums.size();
//    while(left < right){
//        int mid = (left+right)/2;
//        if(nums[mid] >= target) right = mid;
//        else left = mid+1;
//    }
//    return left;
//}
//
//int upperBound(vector<int>& nums, int target)
//{
//    int left = 0, right = nums.size();
//    while(left < right){
//        int mid = (left+right)/2;
//        if(nums[mid] > target) right = mid;
//        else left = mid+1;
//    }
//    return left;
//}

//vector<int> targetIndices(vector<int>& nums, int target)
//{
//    vector<int> ans;
//    sort(nums.begin(), nums.end());
//    int lb = lowerBound(nums, target);
//    int ub = upperBound(nums, target);
//    if(nums[lb] != target || lb == nums.size()) return ans;
//    for(int i = lb; i < ub; i++) ans.push_back(i);
//    return ans;
//}

vector<int> targetIndices(vector<int>& nums, int target)
{
    vector<int> ans;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == target) ans.push_back(i);
    }
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
    int target;
    cin >> target;
    vector<int> ans = targetIndices(nums, target);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}

/*
1 2 5 2 3
2
*/
