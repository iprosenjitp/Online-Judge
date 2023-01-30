#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, A[102], flag = 1;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }

        for(int i = 0; i < n-1; i++){
            if(abs(A[i] - A[i+1])%2) {
                flag = 0;
                break;
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}
