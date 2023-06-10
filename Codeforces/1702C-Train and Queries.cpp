#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k, ni;
        cin >> n >> k;
        map<int, int> first, last;
        for(int i = 1; i <= n; i++){
            cin >> ni;
            if(!first[ni]) first[ni] = i;
            last[ni] = i;
        }
        while(k--){
            int a, b;
            cin >> a >> b;
            int x = first[a];
            int y = last[b];
            if(x && x<y) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
