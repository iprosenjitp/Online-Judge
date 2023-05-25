#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    string s;
    cin >> s;
    int i, flag = 0;
    for(i = 0; i < s.size(); i++){
        if(s[i] == '0') {
            flag = 1;
            break;
        }
    }
    string ans;
    if(flag){
        ans = s.substr(0, i);
        ans += s.substr(i+1, s.size()-i-1);
    }
    else ans = s.substr(0, s.size()-1);
    cout << ans << "\n";
}
