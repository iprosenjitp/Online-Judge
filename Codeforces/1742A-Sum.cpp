#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        vector<int> A(3);
        for(int i = 0; i < 3; i++) cin >> A[i];
        sort(A.begin(), A.end());
        if(A[0]+A[1] == A[2]) cout << "YES\n";
        else cout << "NO\n";
    }
}
