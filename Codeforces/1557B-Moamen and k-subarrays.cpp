#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> V(n);
        map<int, int> M;
        for(int i = 0; i < n; i++) {
            cin >> V[i];
            M[V[i]] = i;
        }
        sort(V.begin(), V.end());
        int cnt = 1;
        int ind = M[V[0]];
        for(int i = 1; i < n; i++){
            int x = M[V[i]];
            if(x != ind+1) cnt++;
            ind = x;
        }
        if(cnt <= k) cout << "YES\n";
        else cout << "NO\n";
    }
}

/**
3
5 4
6 3 4 2 1
*/
