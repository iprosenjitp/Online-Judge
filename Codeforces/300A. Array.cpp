#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++) cin >> A[i];
    sort(A.begin(), A.end());
    int x = find(A.begin(), A.end(), 0) - A.begin();
    int j = 1;
    cout << "1 " << A[0] << "\n";
    if(x == n-1) {
        cout << "2 " << A[1] << " " << A[2] << "\n";
        j = 3;
    }
    else {
        cout << n-x-1 << " ";
        for(int i = x+1; i < n; i++) cout << A[i] << " ";
        cout << "\n";
    }
    cout << x-j+1 << " ";
    for( ; j <= x; j++) cout << A[j] << " ";
    cout << "\n";
}
