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
        vector<int> A(n);
        int bi;
        int x = n-1, y = n-1;
        int flagX = 0, flagY = 0;
        for(int i = 0; i < n; i++){
            cin >> A[i];
            if(!flagX && A[i] == -1){
                x = i;
                flagX = 1;
            }
            if(!flagY && A[i] == 1){
                y = i;
                flagY = 1;
            }
        }
        int maxi = max(x, y);
        int mini = min(x, y);
        int flag = 0;
        bool ans = true;
        if(A[mini] == 1) flag = 1;
        for(int i = 0; i < n; i++) {
            cin >> bi;
            if(bi == A[i]) continue;
            if(i <= mini){
                ans = false;
                continue;
            }
            if(i > mini && i <= maxi){
                if(flag && bi < A[i]){
                    ans = false;
                    continue;
                }
                if(!flag && bi > A[i]){
                    ans = false;
                    continue;
                }
            }
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
}
