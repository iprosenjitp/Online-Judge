#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n, x;
        ll sum1 = 0L, sum2 = 0L;
        cin >> n >> x;
        for(int i = 0; i < n; i++){
            ll ni;
            cin >> ni;
            sum1 += ni;
            sum2 += ceil((ni*1.0)/x);
        }
        ll mini = ceil(sum1*1.0/x);
        cout << mini << " " << sum2 << "\n";
    }
}
