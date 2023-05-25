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
        int cntM = 0, cntT = 0;
        int flag = 1;
        for(int i = 0; i < n; i++){
            if(s[i] == 'T') cntT++;
            else cntM++;
            if(cntM > cntT) flag = 0;
        }
        if(!flag || cntM*2 != cntT){
            cout << "NO\n";
            continue;
        }
        cntM = 0, cntT = 0, flag = 1;
        for(int i = n-1; i >= 0; i--){
            if(s[i] == 'T') cntT++;
            else cntM++;
            if(cntM > cntT){
                flag = 0;
                break;
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}
