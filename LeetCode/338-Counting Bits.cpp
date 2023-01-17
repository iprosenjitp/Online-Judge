#include <iostream>
#include <vector>

using namespace std;

vector<int> countBits(int n)
{
    vector<int> ans;
    for(int i = 0; i <= n; i++){
        int cnt = 0;
        for(int j = 31; j >= 0; j--){
            if(i & (1 << j)) cnt++;
        }
        ans.push_back(cnt);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> ans = countBits(n);
    cout << "[" << ans[0];
    for(int i = 1; i < ans.size(); i++){
        cout << "," << ans[i];
    }
    cout << "]" << "\n";

    return 0;
}

