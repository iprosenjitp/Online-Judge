#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int ans = -1;
    if(m%n == 0){
        ans = 0;
        int d = m/n;
        while(d%2 == 0)
            ans++, d /= 2;
        while(d%3 == 0)
            ans++, d /= 3;
        if(d != 1) ans = -1;
    }
    cout << ans << "\n";
}
