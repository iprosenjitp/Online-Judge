#include <bits/stdc++.h>
#define ll long long

using namespace std;

void sort012(int a[], int n)
{
    sort(a, a+n);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int n, A[100005];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    sort012(A, n);
}
