#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int x, y;
    for(int i = 0; i < nums.size()-1; i++){
        for(int j = i+1; j < nums.size(); j++){
            if(nums[i] + nums[j] == target){
                x = i;
                y = j;
                break;
            }
            if(x) break;
        }
    }
    return {x, y};
}

int main()
{
    vector<int> nums;
    for(int i = 0; i < 4; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int target;
    cin >> target;
    vector<int> ans = twoSum(nums, target);
    cout << "[" << ans[0] << "," << ans[1] << "]\n";
    return 0;
}

