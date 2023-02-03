#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, cnt0 = 0, cntN1 = 0, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int ni;
        cin >> ni;
        if(ni == 0) {
            cnt0++;
            ans++;
        }
        else if(ni < 0) {
            cntN1++;
            ans += abs(ni)-1;
        }
        else ans += ni-1;
    }
    if(cntN1%2 && !cnt0) ans += 2;
    cout << ans << "\n";
}
