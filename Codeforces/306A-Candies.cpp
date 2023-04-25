#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = m; i >= 1; i--){
        cout << n/i << " ";
        n -= n/i;
    }
    cout << "\n";
}
