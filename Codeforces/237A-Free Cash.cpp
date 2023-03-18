#include <bits/stdc++.h>
#define ll long long

using namespace std;

int T[24][60];

int main()
{
    int n, h, m, k = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> h >> m;
        T[h][m]++;
        if(T[h][m] > k) k = T[h][m];
    }
    cout << k << "\n";
}
