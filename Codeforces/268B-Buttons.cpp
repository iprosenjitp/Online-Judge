#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n, sum = 0L;
    cin >> n;
    for(int i = 1; i <= n; i++){
        sum += i * (n-i) + 1;
    }
    cout << sum << "\n";
}
