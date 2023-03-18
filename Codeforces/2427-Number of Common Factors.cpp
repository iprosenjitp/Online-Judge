#include <bits/stdc++.h>
#define ll long long

using namespace std;

int commonFactors(int a, int b)
{
    int cnt = 0;
    int x = min(a, b);
    for(int i = 1; i <= x/2; i++){
        if(a%i == 0 && b%i == 0) cnt++;
    }
    if(max(a, b)%x == 0) cnt++;
    return cnt;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = commonFactors(a, b);
    cout << ans << "\n";
}
