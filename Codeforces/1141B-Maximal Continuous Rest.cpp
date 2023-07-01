#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++) cin >> A[i];
    int ans = 0, i, j;
    for(i = 0; i < n; i++){
        if(A[i]) ans++;
        else break;
    }
    for(j = n-1; j >= 0; j--){
        if(A[j]) ans++;
        else break;
    }
    int cnt = 0;
    for(int k = i; k <= j; k++){
        if(A[k]) cnt++;
        else{
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    cout << ans << "\n";
}
