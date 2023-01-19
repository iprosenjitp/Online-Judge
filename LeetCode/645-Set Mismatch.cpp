#include <iostream>

using namespace std;

vector<int> findErrorNums(vector<int>& nums)
{

}

int main()
{
    vector<int> nums;
    for(int i = 0; i < 5; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    vector<int> ans = findErrorNums(nums);
    cout << "[" << ans[0];
    for(int i = 1; i < ans.size(); i++){
        cout << "," << ans[i];
    }
    cout << "]";

    return 0;
}

