#include <bits/stdc++.h>
using namespace std;

int A[5][5], ans[5][5];

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            int x;
            cin >> x;
            A[i][j] = x;
            ans[i][j] = 1;
        }
    }
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if(A[i][j] % 2){
                ans[i][j] = 1 - ans[i][j];
                ans[i][j-1] = 1 - ans[i][j-1];
                ans[i][j+1] = 1 - ans[i][j+1];
                ans[i-1][j] = 1 - ans[i-1][j];
                ans[i+1][j] = 1 - ans[i+1][j];
            }
        }
    }
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) cout << ans[i][j];
        cout << endl;
    }
    return 0;
}
