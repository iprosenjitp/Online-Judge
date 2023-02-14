#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    string S, cons = "", ans = "";
    cin >> S;
    for(int i = 0; i < S.length(); i++) S[i] = tolower(S[i]);
    for(int i = 0; i < S.length(); i++) {
        if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u' || S[i] == 'y')
            continue;
        cons += S[i];
    }
    for(int i = 0; i < cons.length(); i++){
        ans += ".";
        ans += cons[i];
    }
    cout << ans << "\n";
}
