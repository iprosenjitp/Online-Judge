#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
{
    vector<int> ans;
    set<int> s1, s2;
    for(int i = 0; i < nums1.size(); i++) s1.insert(nums1[i]);
    for(int i = 0; i < nums2.size(); i++) s2.insert(nums2[i]);
    for(auto x : s1){
        if(s2.count(x)) ans.push_back(x);
    }
    return ans;
}

int main()
{
    vector<int> A, B;
    int n;
    for(int i = 0; i < 4; i++){
        cin >> n;
        A.push_back(n);
    }
    for(int i = 0; i < 2; i++){
        cin >> n;
        B.push_back(n);
    }
    vector<int> ans = intersection(A, B);
    for(auto x : ans) cout << x << " ";
    cout << "\n";
}

/**
1 2 2 1
2 2
*/
