#include <iostream>

using namespace std;

int main()
{
    int n, m, cnt = 0;
    cin >> n >> m;
    int ans = n;
    while(n/m){
        cnt += n/m;
        n = n/m + n%m;
    }
    ans += cnt;
    cout << ans << "\n";

    return 0;
}

