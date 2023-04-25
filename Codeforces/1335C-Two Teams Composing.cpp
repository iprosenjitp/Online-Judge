#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, ni, cntDigit = 0, cntMaxVal = 0;
        cin >> n;
        vector<int> V(n+1);
        for(int i = 0; i < n; i++) {
            cin >> ni;
            V[ni]++;
            if(V[ni] == 1) cntDigit++;
            if(V[ni] > cntMaxVal) cntMaxVal = V[ni];
        }
        cout << max(min(cntMaxVal - 1, cntDigit), min(cntMaxVal, cntDigit - 1)) << "\n";
    }
}
