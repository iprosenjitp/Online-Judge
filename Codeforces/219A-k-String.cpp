#include <bits/stdc++.h>
#define ll long long

using namespace std;

int A[30];

int main()
{
    int k;
    string s;
    cin >> k;
    cin >> s;
    int len = s.length();
    for(int i = 0; i < len; i++) A[s[i] - 'a']++;
    string str = "";
    for(int i = 0; i < 26; i++){
        if(A[i] == 0) continue;
        if(A[i]%k){
            cout << "-1\n";
            return 0;
        }
        int x = A[i]/k;
        for(int j = 0; j < x; j++) str += 'a' + i;
    }
    string ans = "";
    for(int i = 0; i < k; i++) ans += str;
    cout << ans << "\n";
}
