#include <bits/stdc++.h>
#define ll long long

using namespace std;

int lowerBound(vector<int>& A, int left, int target)
{
    int right = A.size();
    while(left < right){
        int mid = (left+right) / 2;
        if(A[mid] >= target) right = mid;
        else left = mid+1;
    }
    return left;
}

vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
{
    vector<int> ans;
    int startPos = 0;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    for(int i = 0; i < nums1.size(); i++){
        int x = lowerBound(nums2, startPos, nums1[i]);
//        cout << x << " = X\n";
        if(x >= nums2.size()) break;
        if(nums1[i] == nums2[x]){
            ans.push_back(nums1[i]);
            startPos = x+1;
        }
        else startPos = x;
    }
    return ans;
}

int main()
{
    vector<int> nums1, nums2;
    int num;
    for(int i = 0; i < 3; i++){
        cin >> num;
        nums1.push_back(num);
    }
    for(int i = 0; i < 5; i++){
        cin >> num;
        nums2.push_back(num);
    }
    vector<int> ans = intersect(nums1, nums2);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}

/**
1 2 2 1
2 2

4 9 5
9 4 9 8 4

1 2
1 1

4 9 5
9 4 9 8 4
*/
