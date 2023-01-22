#include <iostream>
#include <vector>

using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums)
{
    vector<int> ans;
    for(int i = 0; i < nums.size(); i++){
        int cnt = 0;
        for(int j = 0; j < nums.size(); j++){
            if(j == i) continue;
            if(nums[j] < nums[i]) cnt++;
        }
        ans.push_back(cnt);
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
    vector<int> ans = smallerNumbersThanCurrent(nums);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << "\n";

    return 0;
}

