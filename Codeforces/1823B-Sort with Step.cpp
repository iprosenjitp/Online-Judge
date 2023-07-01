#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> A(n);
        for(int i = 0; i < n; i++) cin >> A[i];
        int cnt = 0, flag = 1;
        for(int i = 0; i < n; i++){
            int x = abs(A[i] - (i+1));
            if(x%k) cnt++;
            if(cnt > 2){
                flag = 0;
                break;
            }
        }
        if(flag) cout << cnt/2 << "\n";
        else cout << "-1\n";
    }
}
