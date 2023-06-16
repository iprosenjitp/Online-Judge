#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        string s, temp = "";
        cin >> n;
        cin >> s;
        s += 'W';
        int cntR = 0, cntB = 0, flag = 1;
        for(int i = 0; i < n+1; i++){
            if(s[i] == 'W'){
                if(temp.size() && (!cntR || !cntB)){
                    flag = 0;
                    break;
                }
                temp = "";
                cntR = 0;
                cntB = 0;
                continue;
            }
            temp += s[i];
            if(s[i] == 'R') cntR++;
            if(s[i] == 'B') cntB++;
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}
