#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int A[26], B[26], cnt = 0;
        vector<int> X(n, 0), Y(n, 0);
        for(int i = 0; i < 26; i++) A[i] = 0;
        for(int i = 0; i < 26; i++) B[i] = 0;
        for(int i = 0; i < n; i++){
            if(A[s[i] - 'a'] == 0) cnt++;
            X[i] = cnt;
            A[s[i] - 'a']++;
        }
        cnt = 0;
        for(int i = n-1; i >= 0; i--){
            if(B[s[i] - 'a'] == 0) cnt++;
            Y[i] = cnt;
            B[s[i] - 'a']++;
        }
        int ans = 0;
        for(int i = 0; i < n-1; i++){
            int a = X[i];
            int b = Y[i+1];
            if(a+b >= ans) ans = a+b;
        }
        if(ans > n) ans--;
        cout << ans << "\n";
    }
}
