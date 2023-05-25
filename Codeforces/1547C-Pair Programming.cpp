#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int k, n, m;
        cin >> k >> n >> m;
        vector<int> A(n), B(m);
        for(int i = 0; i < n; i++) cin >> A[i];
        for(int i = 0; i < m; i++) cin >> B[i];
        int i = 0, j = 0;
        vector<int> ans;
        int flag = 1;
        while(i < n || j < m){
            if(i < n && j < m){
                if(A[i] == 0) ans.push_back(0), i++, k++;
                else if(B[j] == 0) ans.push_back(0), j++, k++;
                else{
                    if(A[i] <= B[j] && A[i] <= k) ans.push_back(A[i]), i++;
                    else if(A[i] > B[j] && B[j] <= k) ans.push_back(B[j]), j++;
                    else{
                        cout << "-1";
                        flag = 0;
                        break;
                    }
                }
            }
            else if(i < n){
                if(A[i] == 0) ans.push_back(0), i++, k++;
                else if(A[i] <= k) ans.push_back(A[i]), i++;
                else{
                    cout << "-1";
                    flag = 0;
                    break;
                }
            }
            else if(j < m){
                if(B[j] == 0) ans.push_back(0), j++, k++;
                else if(B[j] <= k) ans.push_back(B[j]), j++;
                else{
                    cout << "-1";
                    flag = 0;
                    break;
                }
            }
        }
        if(flag)
            for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
        cout << "\n";
    }
}
