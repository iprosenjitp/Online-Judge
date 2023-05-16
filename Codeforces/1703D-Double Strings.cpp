#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> A(n);
        map<string, bool> mp;
        for(int i = 0; i < n; i++){
            cin >> A[i];
            mp[A[i]] = 1;
        }
        for(int i = 0; i < n; i++){
            string str = A[i];
            bool b = 0;
            for(int j = 0; j < str.size(); j++){
                if(mp[str.substr(0, j+1)] && mp[str.substr(j+1, str.size()-j-1)]) b = 1;
            }
            cout << b;
        }
        cout << "\n";
    }
}
