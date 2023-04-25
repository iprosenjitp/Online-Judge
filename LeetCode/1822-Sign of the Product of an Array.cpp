#include <bits/stdc++.h>
#define ll long long

using namespace std;

int arraySign(vector<int>& nums)
{
    int prod = 1;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] < 0) prod *= -1;
        else if(nums[i] > 0) prod *= 1;
        else prod *= 0;
    }
    if(prod < 0) return -1;
    else if(prod > 0) return 1;
    else return 0;
}

int main()
{
    vector<int> nums;
    for(int i = 0; i < 7; i++){
        int n;
        cin >> n;
        nums.push_back(n);
    }
    int ans = arraySign(nums);
    cout << ans << "\n";
}

/**
-1 -2 -3 -4 3 2 1
*/
