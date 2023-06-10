#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> A(n);
    for(int i = 0; i < n; i++) cin >> A[i];
    for(int i = 0; i < q; i++){
        int qi;
        cin >> qi;
        int x = find(A.begin(), A.end(), qi) - A.begin();
        cout << x+1 << "\n";
        rotate(A.begin(), A.begin()+x, A.begin()+x+1);
    }
}
