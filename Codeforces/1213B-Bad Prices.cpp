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
        int cnt = 0;
        int mini = A[n-1];
        for(int i = n-2; i >= 0; i--){
            if(A[i] > mini) cnt++;
            mini = min(mini, A[i]);
        }
        cout << cnt << "\n";
    }
}
