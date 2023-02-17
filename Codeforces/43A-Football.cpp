#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, flag = 1, cntA = 0, cntB = 0;
    string S[102], teamA, teamB;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> S[i];
        teamA = S[0];
        if(S[i] != teamA && flag) {
            teamB = S[i];
            flag = 0;
        }
        if(S[i] == teamA) cntA++;
        else cntB++;
    }
    if(cntA > cntB) cout << teamA;
    else cout << teamB;
    cout << "\n";
}
