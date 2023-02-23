#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, x, cnt = 0;
    cin >> n >> x;
    for(int i = 1; i <= n && i <= x; i++)
        if(x%i == 0 && n >= x/i) cnt++;
    cout << cnt << "\n";
}
