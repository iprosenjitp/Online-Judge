#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, A[26], ans = 0, flag;
        string s;
        cin >> n;
        cin >> s;
        for(int i = 0; i < 26; i++) A[i] = 0;
        for(int i = 0; i < n; i++) {
            if(A[s[i] - 'a'] == 1) {
                flag = i;
                break;
            }
            A[s[i] - 'a']++;
        }
        ans += flag;
        for(int i = 0; i < 26; i++) A[i] = 0;
        for(int i = flag; i < n; i++) A[s[i] - 'a']++;
        for(int i = 0; i < 26; i++) if(A[i]) ans++;
        cout << ans << "\n";
    }
}
