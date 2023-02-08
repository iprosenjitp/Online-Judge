#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int x = 1;
    while(t--){
        long long n, A[102], extra = 0;
        bool flag = true;
        cin >> n;
        memset(A, 0, sizeof A);
        for(int i = 0; i < n; i++){
            cin >> A[i];
            A[i] += extra;
            if(A[i] < i) flag = false;
            extra = A[i] - i;
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}
