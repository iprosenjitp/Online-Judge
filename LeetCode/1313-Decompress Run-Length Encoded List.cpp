#include <iostream>
#include <vector>

using namespace std;

vector<int> decompressRLElist(vector<int>& nums)
{
    vector<int> ans;
    for(int i = 0; i < nums.size(); i += 2){
        for(int j = 0; j < nums[i]; j++){
            ans.push_back(nums[i+1]);
        }
    }
    return ans;
}

int main()
{
    vector<int> V;
    for(int i = 0; i < 4; i++){
        int n;
        cin >> n;
        V.push_back(n);
    }
    vector<int> ans = decompressRLElist(V);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";

    return 0;
}

