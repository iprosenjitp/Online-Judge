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
        for(int i = 0; i < n; i++) cin >> A[i];
        int even = 0, odd = 0, flag = 1;
        for(int i = 0; i < n; i++){
            if(A[i]%2){
                if(A[i] < odd){
                    flag = 0;
                    break;
                }
                else odd = A[i];
            }
            else{
                if(A[i] < even){
                    flag = 0;
                    break;
                }
                else even = A[i];
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}
