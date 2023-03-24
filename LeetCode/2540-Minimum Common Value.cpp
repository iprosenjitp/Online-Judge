#include <bits/stdc++.h>
#define ll long long

using namespace std;

int getCommon(vector<int>& nums1, vector<int>& nums2)
{
    for(int i = 0; i < nums1.size(); i++){
        if(binary_search(nums2.begin(), nums2.end(), nums1[i]))
            return nums1[i];
    }
    return -1;
}

int main()
{
    vector<int> nums1, nums2;
    int num;
    for(int i = 0; i < 4; i++){
        cin >> num;
        nums1.push_back(num);
    }
    for(int i = 0; i < 4; i++){
        cin >> num;
        nums2.push_back(num);
    }
    int ans = getCommon(nums1, nums2);
    cout << ans << "\n";
}

/**
1 2 3
2 4

1 2 3 6
2 3 4 5
*/
