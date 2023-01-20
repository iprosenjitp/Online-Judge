#include <iostream>
#include <vector>

using namespace std;

int differenceOfSum(vector<int>& nums)
{
    int eleSum = 0, digSum = 0;
    for(int i = 0; i < nums.size(); i++) {
        eleSum += nums[i];
        while(nums[i]){
            digSum += nums[i]%10;
            nums[i] /= 10;
        }
    }
//    cout << eleSum << " " << digSum << "\n";
    int ans = eleSum - digSum;
    if(ans < 0) return ans*(-1);
    else return ans;

}

int main()
{
    vector<int> nums;
    for(int i = 0; i < 4; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int ans = differenceOfSum(nums);
    cout << ans << "\n";

    return 0;
}

