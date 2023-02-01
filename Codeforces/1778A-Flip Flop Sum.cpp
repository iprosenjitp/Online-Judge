#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, A[200005];
    cin >> t;
    while(t--){
        int n, ans, sum = 0, cnt = 0, flag = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> A[i];
            sum += A[i];
            if(A[i] == -1){
                cnt++;
                if(i != 0 && A[i-1] == -1) flag = 1;
            }
        }
        if(!cnt) ans = sum-4;
        else if(flag) ans = sum+4;
        else ans = sum;
        cout << ans << "\n";
    }
}
