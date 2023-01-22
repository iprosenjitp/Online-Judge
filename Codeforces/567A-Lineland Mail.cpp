#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, A[100005];
    cin >> n;
    vector<vector<int>> V(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    int mini = 10e9, maxi = 0;
    for(int i = 0; i < n; i++){
        if(i == 0) {
            mini = abs(A[i] - A[i+1]);
            maxi = abs(A[i] - A[n-1]);
        }
        else if(i == n-1){
            mini = abs(A[i] - A[i-1]);
            maxi = abs(A[i] - A[0]);
        }
        else {
            mini = ((abs(A[i] - A[i-1]) <= abs(A[i] - A[i+1])) ? abs(A[i] - A[i-1]) : abs(A[i] - A[i+1]));
            maxi = ((abs(A[i] - A[0]) <= abs(A[i] - A[n-1])) ? abs(A[i] - A[n-1]) : abs(A[i] - A[0]));
        }
        cout << mini << " " << maxi << "\n";
    }

    return 0;
}

