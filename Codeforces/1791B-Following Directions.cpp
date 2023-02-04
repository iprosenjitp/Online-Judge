#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, x = 0, y = 0, flag = 0;
        string str;
        cin >> n;
        cin >> str;
        for(int i = 0; i < str.length(); i++){
            if(str[i] == 'U') x++;
            else if(str[i] == 'D') x--;
            else if(str[i] == 'L') y--;
            else y++;
            if(x == 1 && y == 1) {
                flag = 1;
                break;
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}
