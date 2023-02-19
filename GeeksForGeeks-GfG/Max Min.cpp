#include <bits/stdc++.h>
#define ll long long

using namespace std;

int findSum(int A[], int N)
{
    sort(A, A+N);
    return A[0]+A[N-1];
}

int main()
{
    int n, A[100005];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    int ans = findSum(A, n);
    cout << ans << "\n";
}
