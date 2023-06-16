#include <bits/stdc++.h>
#define ll long long

using namespace std;

void moveZeroes(vector<int>& nums)
{
    int n = nums.size();
    int i;
    int flag = 1;
    for(i = 0; i < n; i++){
        if(!nums[i]) {
            flag = 0;
            break;
        }
    }
    if(flag) return;
    int cnt0 = 1;
    while(i+cnt0 < n){
        if(nums[i+cnt0] == 0){
            cnt0++;
            continue;
        }
        nums[i] = nums[i+cnt0];
        i++;
    }
    for( ; i < n; i++) nums[i] = 0;
}

int main()
{
    vector<int> nums(5);
    for(int i = 0; i < nums.size(); i++) cin >> nums[i];
    moveZeroes(nums);
    for(int i = 0; i < nums.size(); i++) cout << nums[i] << " ";
    cout << "\n";
}

/**
0 1 0 3 12
*/
