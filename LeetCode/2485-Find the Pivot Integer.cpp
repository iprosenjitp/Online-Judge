#include <bits/stdc++.h>
#define ll long long

using namespace std;

int pivotInteger(int n) {
    int sum1 = 0, sum2 = 0;
    for(int i = n; i >= 1; i--){
        sum1 = (i * (i+1)) / 2;
        sum2 += i;
        if(sum1 == sum2) return i;
        if(sum1 < sum2) break;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int ans = pivotInteger(n);
    cout << ans << "\n";
}
