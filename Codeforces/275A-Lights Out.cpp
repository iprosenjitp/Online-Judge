#include <bits/stdc++.h>
using namespace std;

int a[5][5];

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            int x;
            cin >> x;
            a[i][j] = x % 2;
        }
    }
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            a[i][j] ^= a[i-1][j];
            a[i][j] ^= a[i+1][j];
            a[i][j] ^= a[i][j-1];
            a[i][j] ^= a[i][j+1];
        }
    }
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
