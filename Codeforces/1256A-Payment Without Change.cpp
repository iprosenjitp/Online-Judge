#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, n, s, sum = 0;
        cin >> a >> b >> n >> s;
        int needA = s/n;
        if(needA <= a) sum = needA*n;
        else sum = a*n;
        if(s-sum <= b) cout << "YES\n";
        else cout << "NO\n";
    }
}
