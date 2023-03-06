#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> sortArray(vector<int>& nums)
{
    sort(nums.begin(), nums.end());
    return nums;
}

int main()
{
    vector<int> nums;
    for(int i = 0; i < 5; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    nums = sortArray(nums);
    for(int i = 0; i < nums.size(); i++) cout << nums[i] << " ";
    cout << "\n";
}

/*
5 2 3 1 0
*/
