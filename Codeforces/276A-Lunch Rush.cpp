#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, A[10004], maxJoy = -10e9;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int fi, ti, joy;
        cin >> fi >> ti;
        if(ti > k) joy = fi - (ti - k);
        else joy = fi;
        if(joy > maxJoy) maxJoy = joy;
    }
    cout << maxJoy << "\n";
}
