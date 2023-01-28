#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t, n, k, div;
    cin >> t;
    while(t--){
        int flag = 0;
        cin >> n >> k;
        if(!(n%2)) div = 2;
        else{
            for(int i = 3; i < n/2; i += 2){
                if(n%i == 0){
                    div = i;
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) div = n;
        }

        int ans = n + div + 2*(k-1);

        cout << ans << "\n";
    }
}
