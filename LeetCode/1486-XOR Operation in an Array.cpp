#include <iostream>

using namespace std;

int xorOperator(int n, int start)
{
    int ans = 0;
    for(int i = start, j = 0; j < n; i += 2, j++){
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    int n, start;
    cin >> n >> start;
    int ans = xorOperator(n, start);
    cout << ans << "\n";

    return 0;
}

