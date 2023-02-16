#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n, m, A[100005];
    cin >> n >> m;
    cin >> A[0];
    ll cnt = A[0]-1;
    for(int i = 1; i < m; i++){
        cin >> A[i];
        if(A[i-1] > A[i]) cnt += (n - A[i-1]) + (A[i]);
        else cnt += A[i] - A[i-1];
    }
    cout << cnt << "\n";
}
