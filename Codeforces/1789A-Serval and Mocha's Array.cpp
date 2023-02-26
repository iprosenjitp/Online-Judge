#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, A[102];
        cin >> n;
        for(int i = 0; i < n; i++) cin >> A[i];
        int x = 100000;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                x = min(x, __gcd(A[i], A[j]));
            }
        }
        if(x > 2) cout << "No\n";
        else cout << "Yes\n";
    }
}
