#include <bits/stdc++.h>
#define ll long long

using namespace std;

int sumOfMultiples(int n) {
    int ans = 0;
    for(int i = 3; i <= n; i += 3) ans += i;
    for(int i = 5; i <= n; i += 5)
        if(i%3) ans += i;
    for(int i = 7; i <= n; i += 7)
        if(i%3 && i%5) ans += i;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int ans = sumOfMultiples(n);
    cout << ans << "\n";
}
