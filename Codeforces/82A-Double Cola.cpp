#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n, i, j, x, ans;
    string str[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cin >> n;
    while(n>5)
        n=n/2-2;
    cout << str[n-1] << "\n";
//    for(i = 1L, j = 0L; i <= n; i = (5L * pow(2L, j)), j++) x = i;
//    cout << i << " " << x << "\n";
//    ans = (n-x) / (x/5L);
//    if((n-x)%(x/5L)) ans++;
//    cout << ans << "\n";
//    cout <<  str[ans-1]  << "\n";
}
