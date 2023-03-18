#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int r, g, b, w;
        bool ans = false;
        cin >> r >> g >> b >> w;
        while(1){
            int oddCnt = 0;
            if(r%2) oddCnt++;
            if(g%2) oddCnt++;
            if(b%2) oddCnt++;
            if(w%2) oddCnt++;
            if(oddCnt <= 1){
                ans = true;
                break;
            }
            else if(oddCnt == 2) break;
            if(!r || !g || !b) break;
            r--;
            g--;
            b--;
            w += 3;
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
}
