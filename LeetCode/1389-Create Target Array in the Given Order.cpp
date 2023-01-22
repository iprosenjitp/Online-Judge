#include <iostream>
#include <vector>

using namespace std;

vector<int> createTargetArray(vector<int>& nums, vector<int>& index)
{
    vector<int> target;
    for(int i = 0; i < index.size(); i++){
        if(index[i] == target.size()) target.push_back(nums[index[i]]);
        else{
            vector<int> temp;
            for(int t = index[i] ; t < target.size(); t++) temp.push_back(target[t]);
            target[index[i]] = nums[i];
            target.resize(index[i] + 1);
            for(int z = 0; z < temp.size(); z++){
                target.push_back(temp[z]);
            }
        }
    }
    return target;
}

int main()
{
    vector<int> nums, index;
    for(int i = 0; i < 5; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    for(int i = 0; i < 5; i++){
        int in;
        cin >> in;
        index.push_back(in);
    }
    vector<int> ans = createTargetArray(nums, index);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";

    return 0;
}

