#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, cnt5 = 0;
        cin >> n;
        for(int i = 1; i <= n; i++){
            if(!(i%5)) cnt5++;
            if(!(i%25)) cnt5++;
        }
        cout << cnt5 << "\n";
    }
}
