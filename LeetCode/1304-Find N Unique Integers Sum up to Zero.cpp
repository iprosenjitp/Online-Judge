#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> sumZero(int n)
{
    vector<int> ans;
    int r = n/2;
    int l = -r;
    for(int i = l; i <= r; i++){
        if(n%2 == 0 && i == 0) continue;
        ans.push_back(i);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> ans = sumZero(n);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}
