#include <iostream>
#include <vector>

using namespace std;

bool divideArray(vector<int>& nums)
{
    sort(nums.begin(), nums.end());
//    int xorSum = 0;
    for(int i = 0; i < nums.size()-1; i += 2){
        if(nums[i] != nums[i+1]) return false;
//        xorSum ^= nums[i];
    }
//    if(xorSum) return false;
    return true;
}

int main()
{
    vector<int> nums;
    for(int i = 0; i < 6; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    bool ans = divideArray(nums);
    if(ans == true) cout <<  "true" << "\n";
    else cout << "false" << "\n";
    return 0;
}

