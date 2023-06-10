#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, cnt0 = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            int ni;
            cin >> ni;
            if(!ni) cnt0++;
        }
        int k = n/2;
        if(!cnt0 || cnt0 < n/2){
            if(k%2) k++;
            cout << k << "\n";
            for(int i = 0; i < k; i++) cout << "1 ";
            cout << "\n";
        }
        else{
            cout << k << "\n";
            for(int i = 0; i < k; i++) cout << "0 ";
            cout << "\n";
        }
    }
}
