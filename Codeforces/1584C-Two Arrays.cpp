#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> A(n), B(n);
        for(int i = 0; i < n; i++) cin >> A[i];
        for(int i = 0; i < n; i++) cin >> B[i];
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        bool ans = true;
        for(int i = 0; i < n; i++){
            if(B[i]-A[i] > 1 || B[i]-A[i] < 0) {
                ans = false;
                break;
            }
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
}
