#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a1, a2, b1, b2;
        cin >> a1 >> b1 >> a2 >> b2;
        int maxA = max(a1, b1);
        int minA = min(a1, b1);
        int maxB = max(a2, b2);
        int minB = min(a2, b2);
        if(maxA == maxB && minA+minB == maxA) cout << "Yes\n";
        else cout << "No\n";
    }
}
