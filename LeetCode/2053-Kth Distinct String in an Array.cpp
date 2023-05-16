#include <bits/stdc++.h>
#define ll long long

using namespace std;

string kthDistinct(vector<string>& arr, int k)
{
    multiset<string> ms;
    vector<string> ans;
    for(int i = 0; i < arr.size(); i++) ms.insert(arr[i]);
    for(int i = 0; i < arr.size(); i++){
        if(ms.count(arr[i]) == 1) ans.push_back(arr[i]);
    }
    if(ans.size() < k) return "";
    return ans[k-1];
}

int main()
{
    string s;
    vector<string> arr(6);
    for(int i = 0; i < arr.size(); i++) cin >> arr[i];
    int k;
    cin >> k;;
    string ans = kthDistinct(arr, k);
    cout << ans << "\n";
}

/**
d b c b c a 2
*/
