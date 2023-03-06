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
        if(n == 1) cout << "-1";
        else {
            cout << "2";
            for(int i = 1; i < n; i++) cout << "3";
        }
        cout << "\n";
    }
}
