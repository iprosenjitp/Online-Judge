#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int x = 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(x) cout << "W";
                else cout << "B";
                x = 0;
            }
            cout << "\n";
        }
    }
}
