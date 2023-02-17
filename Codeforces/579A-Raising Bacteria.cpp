#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int x, ans = 0;
    cin >> x;
    for(int i = 31; i >= 0; i--){
        if(x & (1 << i)) ans++;
    }
    cout << ans << "\n";
}
