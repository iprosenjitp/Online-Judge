#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int a, b, c, A[5];
    cin >> a >> b >> c;
    int ans = max(max(a + b + c, a * b * c), max((a+b) * c, a * (b+c)));
    cout << ans << "\n";
}
