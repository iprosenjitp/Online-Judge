#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, ni, cntOdd = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> ni;
        if(ni%2) cntOdd++;
    }
    if(cntOdd%2) cout << cntOdd << "\n";
    else cout << n-cntOdd << "\n";
}
