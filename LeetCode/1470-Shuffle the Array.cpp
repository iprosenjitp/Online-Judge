#include <iostream>
#include <vector>

using namespace std;

vector<int> shuffle(vector<int>& nums, int n)
{
    vector<int> ans;
    for(int i = 0, x = n, y = 0; i < nums.size(); i++){
        if(i%2) ans.push_back(nums[x++]);
        else ans.push_back(nums[y++]);
    }
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
    int n;
    cin >> n;
    vector<int> ans = shuffle(nums, n);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << "\n";

    return 0;
}

