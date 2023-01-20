#include <iostream>
#include <vector>

using namespace std;

vector<int> findErrorNums(vector<int>& nums)
{
    int len = nums.size();
    for(int i = 1; i <= len; i++) {
        nums.push_back(i);
    }

//    for(int i = 0; i < nums.size(); i++) {
//        cout << nums[i] << " ";
//    } cout << "\n";

    int xorSum = 0;
    for(int i = 0; i < nums.size(); i++) xorSum ^= nums[i];
    int flag;
    for(int i = 0; i < 32; i++){
        if(xorSum & (1 << i)){
            flag = i;
            break;
        }
    }
    int A = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] & (1 << flag)){
            A ^= nums[i];
        }
    }
    int B = xorSum ^ A;
//    cout << A << " " << B << "\n";

    for(int i = 0; i < len; i++){
        if(A == nums[i]) return {A, B};
    }
    return {B, A};
}

int main()
{
    vector<int> nums;
    for(int i = 0; i < 4; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    vector<int> ans = findErrorNums(nums);
    cout << "[" << ans[0];
    for(int i = 1; i < ans.size(); i++){
        cout << "," << ans[i];
    }
    cout << "]\n";

    return 0;
}

