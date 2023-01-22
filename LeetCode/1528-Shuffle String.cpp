#include <iostream>
#include <vector>

using namespace std;

string restoreString(string s, vector<int>& indices)
{
    string ans = s;
    for(int i = 0; i < indices.size(); i++){
        ans[indices[i]] = s[i];
    }
    return ans;
}

int main()
{
    string str;
    cin >> str;
    vector<int> nums;
    for(int i = 0; i < 8; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }

    string ans = restoreString(str, nums);
    cout << ans << "\n";

    return 0;
}

