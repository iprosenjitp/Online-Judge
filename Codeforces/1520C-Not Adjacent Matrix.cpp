#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[102][102];
        if(n == 1) cout << "1\n";
        else if(n == 2) cout << "-1\n";
        else{
            int val = 1;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++)
                    A[i][j] = val++;
            }
            for(int j = 1; j < n; j += 2){
                for(int i = 0; i < n-1; i++){
                    int temp = A[i][j];
                    A[i][j] = A[i+1][j];
                    A[i+1][j] = temp;
                }
            }
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++)
                    cout << A[i][j] << " ";
                cout << "\n";
            }
        }
    }
}
