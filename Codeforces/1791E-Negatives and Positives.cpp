#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, A[200005], sum = 0;
        cin >> n;
        for(int i = 0; i < n; i++) cin >> A[i];
        A[n] = 10e9;
        for(int i = 0; i < n; i++){
            if(A[i] < 0){
                if(abs(A[i]) >= A[i+1]){
                    sum += abs(A[i]) + abs(A[i+1]);
                    i++;
                }
                else sum += A[i];
            }
            else sum += A[i];
        }
        cout << sum << "\n";
    }
}
