#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, ans;
        cin >> n;
        int cnt2 = 0, cnt3 = 0;
        while(!(n%2)){
            cnt2++;
            n /= 2;
        }
        while(!(n%3)){
            cnt3++;
            n /= 3;
        }
        if(n != 1 || cnt2 > cnt3) ans = -1;
        else ans = cnt3 - cnt2 + cnt3;
        cout << ans << "\n";
    }

    return 0;
}

