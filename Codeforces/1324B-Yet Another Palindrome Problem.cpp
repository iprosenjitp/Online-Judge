#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> V(n);
        bool ans = false;
        for(int i = 0; i < n; i++) cin >> V[i];
        for(int i = 0; i < n-2; i++){
            for(int j = i+2; j < n; j++){
                if(V[i] == V[j]){
                    ans = true;
                    break;
                }
            }
            if(ans) break;
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
}
