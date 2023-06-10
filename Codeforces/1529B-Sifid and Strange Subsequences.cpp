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
        for(int i = 0; i < n; i++) cin >> A[i];
        sort(A.begin(), A.end());
        int ub = upper_bound(A.begin(), A.end(), 0) - A.begin();
        int low = INT_MAX;
        for(int i = 0; i < ub-1; i++)
            if(abs(A[i]-A[i+1]) < low) low = abs(A[i]-A[i+1]);
        if(ub != n && A[ub] <= low) ub++;
        cout << ub << "\n";
    }
}
