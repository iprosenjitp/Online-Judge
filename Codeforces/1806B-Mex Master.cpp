#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll z = 0, nz = 0, pz = 0;
        map<ll, ll> mp;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] == 0) z++;
            else{
                nz++;
                mp[v[i]]++;
                if(v[i] != i) pz++;
            }
        }
        if(z >= (nz+2)){
            if(mp.find(1) == mp.end()) cout << "1\n";
            else if(pz > 0) cout << "1\n";
            else cout << "2\n";
        }
        else cout << "0\n";
    }
}
