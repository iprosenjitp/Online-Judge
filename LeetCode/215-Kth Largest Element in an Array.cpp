#include <bits/stdc++.h>
#define ll long long

using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int> pq;
    for(int i = 0; i < k; i++) {
        int n = -nums[i];
        pq.push(n);
    }
    for(int i = k; i < nums.size(); i++) {
        int n = nums[i];
        if(-pq.top() < n){
            pq.pop();
            pq.push(-n);
        }
    }
    return -pq.top();
}

int main()
{
    vector<int> A(6);
    for(int i = 0; i < A.size(); i++) cin >> A[i];
    int k;
    cin >> k;
    int ans = findKthLargest(A, k);
    cout << ans << "\n";
}

/**
3 2 1 5 6 4
2
*/
