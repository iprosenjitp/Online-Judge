#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<int> A(n);
        for(int i = 0; i < n; i++) cin >> A[i];
        sort(A.rbegin(), A.rend());
        for(int i = 1; i < n; i++) A[i] += A[i-1];
        int qi;
        while(q--){
            cin >> qi;
            int lb = lower_bound(A.begin(), A.end(), qi) - A.begin();
            if(lb == n) cout << "-1";
            else cout << lb+1;
            cout << "\n";
        }
    }
}
