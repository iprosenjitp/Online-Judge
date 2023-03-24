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
        sort(A, A+n);
        for(int i = n-1; i >= 0; i--) cout << A[i] << " ";
        cout << "\n";
    }
}
