#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int A[102][102];
        int n;
        cin >> n;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n-1; j++) scanf("%d", &A[i][j]);
        }
        int x = A[0][0], y = A[1][0];
        if(A[2][0] == y) x = y;
        cout << x;

        for(int i = 0; i < n-1; i++){
            for(int j = 0; j < n; j++){
                if(A[j][i] != x){
                    cout << " " << A[j][i];
                    x = A[j][i];
                    break;
                }
            }
        }
        cout << "\n";
    }
}
