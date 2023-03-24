#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        vector<string> V;
        cin >> n;
        getchar();
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            V.push_back(s);
        }
        sort(V.begin(), V.end());
        for(int i = 0; i < n; i++) cout << V[i] << "\n";
    }
}
