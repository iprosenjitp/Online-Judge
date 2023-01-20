#include <iostream>
#include <vector>

using namespace std;

int maximumWealth(vector<vector<int>>& accounts)
{
    int ans = 0;
    for(int i = 0; i < accounts.size(); i++){
        int sum = 0;
        for(int j = 0; j < accounts[i].size(); j++){
            sum += accounts[i][j];
        }
        if(sum > ans) ans = sum;
    }
    return ans;
}

int main()
{
    vector<vector<int>> accounts(2);
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            int num;
            cin >> num;
            accounts[i].push_back(num);
        }
    }
    int ans = maximumWealth(accounts);
    cout << ans << "\n";
    return 0;
}

