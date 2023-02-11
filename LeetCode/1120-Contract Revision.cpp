#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1){
        char n;
        string str;
        cin >> n >> str;
//        getchar();
//        cin >> str;
//        getchar();
        if(n == '0' && str.length() == 1 && str[0] == '0') break;
        string ans = "";
        for(int i = 0; i < str.length(); i++){
            if(str[i] == n) continue;
            if(ans.empty() && str[i] == '0') continue;
            else ans += str[i];
        }
        if(ans.empty()) cout << "0\n";
        else cout << ans << "\n";
    }
}
