#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll a, b, maxGCD, maxMove;
        cin >> a >> b;
        maxGCD = abs(a-b);
        if(!maxGCD) maxMove = 0;
        else maxMove = min(a%maxGCD, maxGCD - a%maxGCD);
        cout << maxGCD << " " << maxMove << "\n";
    }
}
