#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k, cnt = 0, A[51];
        for(int i = 0; i <= 50; i++) A[i] = 0;
        cin >> n >> k;
        for(int i = 0; i < n; i++){
            int l, r;
            cin >> l >> r;
            if(k >= l && k <= r){
                for(int j = l; j <= r; j++){
                    A[j]++;
                }
            }
        }
        int x = A[k];
        for(int i = 0; i <= 50; i++) {
            if(i == k) continue;
            if(A[i] >= x) {
                cnt++;
                break;
            }
        }
        if(cnt) cout << "NO\n";
        else cout << "YES\n";
    }
}
