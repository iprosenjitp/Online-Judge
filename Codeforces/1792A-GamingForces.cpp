#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> V;
        for(int i = 0; i < n; i++){
            int ni;
            cin >> ni;
            V.push_back(ni);
        }
        sort(V.begin(), V.end());
        int cnt = 0;
        for(int i = 0; i < V.size()-1; i++){
            if(V[i] == 0) continue;
            if(V[i] == 1){
                V[i]--;
                V[i+1]--;
            }
            cnt++;
        }
        if(V[n-1]) cnt++;
        cout << cnt << "\n";
    }
}
