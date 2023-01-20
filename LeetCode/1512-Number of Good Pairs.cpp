#include <iostream>

using namespace std;

int numIdenticalPairs(vector<int>& nums)
{
    int cnt = 0;
    for(int i = 0; i < nums.size()-1; i++){
        for(int j = i+1; j < nums.size(); j++){
            if(nums[i] == nums[j]) cnt++;
        }
    }
    return cnt;
}

int main()
{
    vector<int> nums;
    for(int i = 0; i < 6; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int ans = numIdenticalPairs(nums);
    cout << ans << "\n";

    return 0;
}

