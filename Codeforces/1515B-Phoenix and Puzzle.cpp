#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int flag1 = 0, flag2 = 0;
        int x, y;
        if(n%2 == 0){
            x = n/2;
            y = sqrt(x);
            if(y*y == x) flag1 = 1;
        }
        if(n%4 == 0){
            x = n/4;
            y = sqrt(x);
            if(y*y == x) flag2 = 1;
        }

        if(flag1 || flag2) cout << "YES\n";
        else cout << "NO\n";
    }
}
