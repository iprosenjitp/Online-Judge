#include <bits/stdc++.h>
#define ll long long

using namespace std;

int fib(int n)
{
    if(n < 2) return n;
    return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    cin >> n;
    int ans = fib(n);
    cout << ans << "\n";
}
