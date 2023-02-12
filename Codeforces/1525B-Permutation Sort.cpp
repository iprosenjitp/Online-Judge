#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, A[55];
        bool flag = true;
        cin >> n;
        for(int i = 1; i <= n; i++) {
            cin >> A[i];
            if(A[i] != i) flag = false;
        }
        if(flag) cout << "0";
        else if(A[1] == 1 || A[n] == n) cout << "1";
        else if(A[1] == n && A[n] == 1) cout << "3";
        else cout << "2";
        cout << "\n";
    }
}
