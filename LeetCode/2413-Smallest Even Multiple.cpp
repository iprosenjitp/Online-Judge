#include <bits/stdc++.h>
#define ll long long

using namespace std;

int smallestEvenMultiple(int n)
{
    if(n%2) n *= 2;
    return n;
}

int main()
{
    int n;
    cin >> n;
    int ans = smallestEvenMultiple(n);
    cout << ans << "\n";
}
