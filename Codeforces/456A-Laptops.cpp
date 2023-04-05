#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    vector<pair<int, int>> V;
    cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b;
        V.push_back({a, b});
    }
    sort(V.begin(), V.end());
//    for(auto i : V) cout << i.first << " " << i.second << "\n";
    int x = V[0].second;
    for(auto i : V){
        if(x > i.second){
            cout << "Happy Alex\n";
            return 0;
        }
        else x = i.second;
    }
    cout << "Poor Alex\n";
}

/**
2
2 1
1 2

*/
