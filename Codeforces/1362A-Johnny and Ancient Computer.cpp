#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        if(a == b) cout << "0\n";
        else{
            if(a < b) swap(a, b);
            ll ans = 0L;
            while(a >= b){
                if(a%8L == 0L && a/8 >= b){
                    ans++;
                    a /= 8L;
                }
                else if(a%4L == 0L && a/4 >= b){
                    ans++;
                    a /= 4L;
                }
                else if(a%2L == 0L && a/2 >= b){
                    ans++;
                    a /= 2L;
                }
                else break;
            }

            if(a == b) cout << ans << "\n";
            else cout << "-1\n";
        }
    }
}
