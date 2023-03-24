#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll x, y, a, b;
        bool flag = true;
        cin >> x >> y >> a >> b;
        if(b < y){
            flag = false;
        }
        ll ans1, aa;
        aa = x + b - y;
        if(aa < a){
            flag = false;
        }

        if(!flag) cout << "-1\n";
        else{
            ans1 = (b-y) + abs(aa-a);
            cout << ans1 << "\n";
        }

//        if(a == x){
//            if(y <= b) cout << abs(b-y)*2 << "\n";
//            else cout << "-1\n";
//        }
//        else if(a < x){
//            if(y <= b) cout << abs(x-a)+abs(b-y)*2 << "\n";
//            else cout << "-1\n";
//        }
//        else{
//            int c = abs(x-a);
//            int d = abs(y-b);
//            if(c == d) cout << c << "\n";
//            else if(c < d) cout << c + (d-c)*2 << "\n";
//            else cout << "-1\n";
//        }
    }
}
