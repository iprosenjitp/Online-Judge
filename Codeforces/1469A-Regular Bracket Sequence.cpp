#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        int len = S.length();
        if(S[0] == ')' || S[len-1] == '(') cout << "NO\n";
        else if(count(S.begin(), S.end(), '?') % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}
