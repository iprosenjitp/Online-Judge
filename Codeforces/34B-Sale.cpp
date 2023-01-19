#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int m, n;
    int A[102];
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        cin >> A[i];
    }
    sort(A, A+m);
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(A[i] > 0) break;
        ans += A[i];
    }
    ans *= -1;
    cout << ans << "\n";

    return 0;
}

