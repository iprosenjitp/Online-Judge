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
        if(n%2){
            for(int i = 0; i < n; i++) cout << "1 ";
        }
        else{
            for(int i = 0; i < n-2; i++) cout << "2 ";
            cout << "1" << " " << "3";
        }
        cout << "\n";
    }
}
