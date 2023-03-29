#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
//        if(r-10 > l) l = r-10;
        int diff = 0;
        int ans = l;
        for(int i = l; i <= r; i++){
            vector<int> V;
            int n = i;
            while(n){
                V.push_back(n%10);
                n /= 10;
            }
            sort(V.begin(), V.end());
            int currDiff = V[V.size()-1] - V[0];
            if(currDiff > diff){
                diff = currDiff;
                ans = i;
            }
            if(diff == 9) break;
        }
        cout << ans << "\n";
    }
}
