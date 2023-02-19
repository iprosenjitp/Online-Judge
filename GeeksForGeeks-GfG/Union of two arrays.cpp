#include <bits/stdc++.h>
#define ll long long

using namespace std;

int doUnion(int a[], int n, int b[], int m)
{
    int c[200005];
    for(int i = 0; i < n; i++) c[i] = a[i];
    for(int i = n, j = 0; j < m; i++, j++) c[i] = b[j];
    sort(c, c+n+m);
//    for(int i = 0; i < n+m; i++) cout << a[i] << " ";
//    cout << "\n";
    int cnt = 1;
    for(int i = 0; i < n+m-1; i++){
        if(c[i] != c[i+1]) cnt++;
    }
    return cnt;
}

int main()
{
    int n, A[100005], m, B[100005];
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> A[i];
    for(int i = 0; i < m; i++) cin >> B[i];
    int ans = doUnion(A, n, B, m);
    cout << ans  << "\n";
}
