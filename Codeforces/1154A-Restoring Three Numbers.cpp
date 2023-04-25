#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll A[5];
    for(int i = 0; i < 4; i++) cin >> A[i];
    sort(A, A+4);
    for(int i = 0; i < 3; i++) cout << A[3]-A[i] << " ";
    cout << "\n";
}
