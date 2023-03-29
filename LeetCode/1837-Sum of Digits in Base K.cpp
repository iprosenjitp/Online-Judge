#include <bits/stdc++.h>
#define ll long long

using namespace std;

int sumBase(int n, int k)
{
    int sum = 0;
    while(n){
        sum += n%k;
        n /= k;
    }
    return sum;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int ans = sumBase(n, k);
    cout << ans << "\n";
}
