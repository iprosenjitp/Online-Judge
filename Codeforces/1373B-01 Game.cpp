#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        int ans;
        int cnt0 = 0, cnt1 = 0;
        for(int i = 0; i < S.length(); i++){
            if(S[i] == '0') cnt0++;
            else cnt1++;
        }
        if(cnt0 <= cnt1) ans = cnt0;
        else ans = cnt1;
        if(ans%2) cout << "DA\n";
        else cout << "NET\n";
    }

    return 0;
}

