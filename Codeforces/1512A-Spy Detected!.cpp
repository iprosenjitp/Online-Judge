#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n;
        vector<int> V(n);
        for(int i = 0; i < n; i++) cin >> V[i];
        if(V[0] == V[1]) x = V[0];
        else x = V[2];
        for(int i = 0; i < n; i++){
            if(x != V[i]){
                cout << i+1 << "\n";
                break;
            }
        }
    }
}
