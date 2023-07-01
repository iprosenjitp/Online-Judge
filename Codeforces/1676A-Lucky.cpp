#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, sumL = 0, sumR = 0, loop = 3;
        cin >> n;
        while(loop--) sumR += n%10, n /= 10;
        loop = 3;
        while(loop--) sumL += n%10, n /= 10;
        if(sumL == sumR) cout << "YES\n";
        else cout << "No\n";
    }
}
