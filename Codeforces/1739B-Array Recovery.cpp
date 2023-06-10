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
        vector<int> ans;
        ans.push_back(A[0]);
        int flag = 1;
        for(int i = 1; i < n; i++){
            if(ans.back() >= A[i] && A[i]){
                flag = 0;
                break;
            }
            ans.push_back(ans.back()+A[i]);
        }
        if(flag){
            for(int i = 0; i < n; i++) cout << ans[i] << " ";
            cout << "\n";
        }
        else cout << "-1\n";
    }
}
