#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        bool ans = true;
        int n;
        string s;
        cin >> n;
        cin >> s;

        int A[30];
        for(int i = 0; i < 26; i++) A[i] = -1;

        for(int i = 0; i < n; i++){
            int ch;
            ch = s[i] - 'a';
            if((i%2 == A[ch]) || A[ch] == -1){
                A[ch] = i%2;
            }
            else{
                ans = false;
                break;
            }
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
}
