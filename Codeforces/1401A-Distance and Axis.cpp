#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k, ans;
        cin >> n >> k;
        if(n < k) ans = k-n;
        else{
            if(n%2 == k%2) ans = 0;
            else ans = 1;
        }
        cout << ans << "\n";
    }

    return 0;
}

