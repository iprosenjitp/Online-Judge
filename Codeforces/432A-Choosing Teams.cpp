#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, k, x, cnt = 0;
    cin >> n >> k;
    while(n--){
        cin >> x;
        if(x+k <= 5) cnt++;
    }
    cout << cnt/3 << "\n";
}
