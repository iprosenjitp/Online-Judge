#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll Hc, Ac, Hm, Am, K, H, A;
        cin >> Hc >> Ac >> Hm >> Am >> K >> A >> H;
        int flag = 0;
        for(ll i = 0LL; i <= K; i++){
            ll nH = Hc + (i*H);
            ll nA = Ac + ((K-i)*A);
            ll monKillTime = Hm/nA;
            if(Hm%nA) monKillTime++;
            ll myKillTime = nH/Am;
            if(nH%Am) myKillTime++;
            if(monKillTime <= myKillTime){
                flag = 1;
                break;
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}
