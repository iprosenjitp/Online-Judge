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
        vector<int> A(n);
        for(int i = 0; i < n; i++){
            cin >> A[i];
            if(i%2) A[i] = abs(A[i]);
            else A[i] = -abs(A[i]);
        }
        for(int i = 0; i < n; i++) cout << A[i] << " ";
        cout << "\n";
    }
}
