#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        cout << "\n";
        int flagR = 0;
        for(int i = 0; i < 8; i++){
            string S;
            int cntR = 0;
            cin >> S;
            if(!flagR){
                for(int j = 0; j < 8; j++){
                    if(S[j] == 'R') cntR++;
                    else break;
                }
            }
            if(cntR == 8) flagR = 1;
        }
        if(flagR) cout << "R\n";
        else cout << "B\n";
    }
}
