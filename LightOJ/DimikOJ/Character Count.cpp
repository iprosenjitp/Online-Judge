#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int A[30];
        for(int i = 0; i < 26; i++) A[i] = 0;
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            A[s[i] - 'a']++;
        }
        for(int i = 0; i < s.size(); i++){
            if(A[s[i] - 'a'] == 0) continue;
            cout << s[i] << " = " << A[s[i] - 'a'] << "\n";
            A[s[i] - 'a'] = 0;
        }
        if(t) cout << "\n";
    }
}
