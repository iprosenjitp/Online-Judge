#include <bits/stdc++.h>
#define ll long long

using namespace std;

long long countSubarrays(vector<int>& nums, int minK, int maxK)
{
    int n = nums.size();
    int leftBound = -1;
    int lastMin = -1, lastMax = -1;
    long count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] >= minK && nums[i] <= maxK) {
            lastMin = (nums[i] == minK) ? i : lastMin;
            lastMax = (nums[i] == maxK) ? i : lastMax;
            count += max(0, min(lastMin, lastMax) - leftBound);
        }
        else {
            leftBound = i;
            lastMin = -1;
            lastMax = -1;
        }
    }
    return count;
}

int main()
{
    vector<int> nums;
    for(int i = 0; i < 6; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int minK, maxK;
    cin >> minK >> maxK;
    ll ans = countSubarrays(nums, minK, maxK);
    cout << ans << "\n";
}

/**
1 3 5 2 7 5
1 5
*/
