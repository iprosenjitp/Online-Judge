#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        int sum = n1 + n2 + n3;
        int maxi = max(max(n1, n2), n3);
        int mini = min(min(n1, n2), n3);
        cout << "Case " << i << ":" << " " << mini << " " << sum - (maxi+mini) << " " << maxi << "\n";
    }
}
