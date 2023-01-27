#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        vector<int> V;
        int n, r, s;
        cin >> n >> s >> r;
        V.push_back(s-r);
        for(int i = 1; i < n; i++){
            V.push_back(r/(n-i));
            r -= r/(n-i);
        }
        for(int i = 0; i < V.size(); i++) cout << V[i] << " ";
        cout << "\n";
    }
}
