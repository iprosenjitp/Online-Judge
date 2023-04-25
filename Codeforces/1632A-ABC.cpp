#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t, n;
    string s;
    cin >> t;
    while(t--){
        cin >> n >> s;
        if(n == 1) printf("YES\n");
        else if(n == 2){
            if(s[0] == s[1]){
                cout << "NO\n";
                continue;
            }
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}
