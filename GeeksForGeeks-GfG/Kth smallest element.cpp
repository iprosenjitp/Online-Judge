#include <bits/stdc++.h>
#define ll long long

using namespace std;

int kthSmallest(int arr[], int l, int r, int k)
{
    sort(arr, arr+r+1);
    return arr[k-1];
}

int main()
{
    int n, k, A[100005];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    cin >> k;
    int ans = kthSmallest(A, 0, n-1, k);
    cout << ans << "\n";
}

/*
5
7 10 4 20 15
3
*/
