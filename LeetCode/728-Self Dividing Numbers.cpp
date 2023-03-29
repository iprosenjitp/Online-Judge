#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> selfDividingNumbers(int left, int right)
{
    vector<int> ans;
    for(int i = left; i <= right; i++){
        int n = i;
        bool flag = true;
        while(n){
            int rem = n%10;
            if(rem && !(i%rem)) n /= 10;
            else{
                flag = false;
                break;
            }
        }
        if(flag) ans.push_back(i);
    }
    return ans;
}

int main()
{
    int left, right;
    cin >> left >> right;
    vector<int> ans = selfDividingNumbers(left, right);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}
