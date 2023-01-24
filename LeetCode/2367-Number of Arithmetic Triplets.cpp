#include <bits/stdc++.h>

using namespace std;

int arithmeticTriplets(vector<int>& nums, int diff)
{
    int cnt = 0;
    for(int i = 0; i < nums.size()-2; i++){
        for(int j = i+1; j < nums.size()-1; j++){
            if(nums[j] - nums[i] < diff) continue;
            if(nums[j] - nums[i] > diff) break;
            for(int k = j+1; k < nums.size(); k++){
                if(nums[k] - nums[j] < diff) continue;
                if(nums[k] - nums[j] > diff) break;
                cnt++;
            }
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
    int diff;
    cin >> diff;
    int ans = arithmeticTriplets(nums, diff);
    cout << ans << "\n";
}
