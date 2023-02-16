#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll s, n;
    pair<int, int> P[1003];
    cin >> s >> n;
    for(int i = 0; i < n; i++) cin >> P[i].first >> P[i].second;
    sort(P, P+n);
    for(int i = 0; i < n; i++){
        if(P[i].first >= s){
            cout << "NO\n";
            return 0;
        }
        s += P[i].second;
    }
    cout << "YES\n";

//    for(int i = 0; i < n; i++){
//        cout << P[i].first << " " << P[i].second << "\n";
//    }
}
