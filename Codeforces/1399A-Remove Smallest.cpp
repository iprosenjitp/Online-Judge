#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
    int n, i, flag = 0;
    cin >> n;
    int a[n-1];
    for(i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    for(i = 1; i < n; i++){
        if(a[i] - a[i-1] > 1){
            flag = 1;
            cout << "NO\n";
            break;
        }
    }
    if(flag == 0) cout << "YES\n";
    }
}

