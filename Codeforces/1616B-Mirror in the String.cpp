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
        string s;
        cin >> s;
        string str = "";
        if(s[0] == 'a' || s[0] == s[1]) str += s[0];
        else{
            str += s[0];
            for(int i = 1; i < n; i++){
                if(s[i] <= s[i-1]) str += s[i];
                else break;
            }
        }
        string ans = str;
        reverse(str.begin(), str.end());
        ans += str;
        cout << ans << "\n";
    }
}
