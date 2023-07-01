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
        int cntEven = 0, cntOdd = 0;
        for(int i = 0; i < n; i++) {
            cin >> A[i];
            if(A[i]%2) cntOdd++;
            else cntEven++;
        }
        if(cntOdd != n/2){
            cout << "-1\n";
            continue;
        }
        int ans = 0;
        for(int i = 1; i < n; i+=2){
            if(A[i]%2 == 0) ans++;
        }
        cout << ans << "\n";
    }
}
