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
        vector<pair<int, int>> A;
        vector<int>B(n);
        for(int i = 0; i < n; i++) {
            int ni;
            cin >> ni;
            A.push_back({ni, i});
        }
        for(int i = 0; i < n; i++) cin >> B[i];
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        vector<int> ans(n);
        for(int i = 0; i < n; i++) ans[A[i].second] = B[i];
        for(int i = 0; i < n; i++) cout << ans[i] << " ";
        cout << "\n";
    }
}
