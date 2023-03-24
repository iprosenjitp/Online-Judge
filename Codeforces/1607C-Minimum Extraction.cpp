#include <bits/stdc++.h>
#define ll long long

using namespace std;

int A[200005];

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, sum = 0, ans = -1e9;
        cin >> n;
        for(int i = 0; i < n; i++) cin >> A[i];
        sort(A, A+n);
        for(int i = 0; i < n; i++){
            A[i] = A[i] - sum;
            ans = max(ans, A[i]);
            sum += A[i];
        }
        cout << ans << "\n";
    }
}
