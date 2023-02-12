#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll a, b, n, m;
        cin >> a >> b >> n >> m;
        ll cost = 0L;
//        if(n <= m) cost = min(a, b) * n;
        for(int i = 0; i < n; i += m){
            ll rem = n-i;
            if(rem <= m) {
                cost += min(a, b) * rem;
                break;
            }
            if((a*m) <= (b*(m+1))) {
                cost += a * m;
                i++;
            }
            else cost += b * m;
//            i += m;
        }
        cout << cost << "\n";
    }
}
