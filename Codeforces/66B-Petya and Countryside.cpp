#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++) cin >> A[i];
    int ans = 0;
    for(int i = 0; i < n; i++){
        int cnt = 1;
        for(int j = i-1; j >= 0; j--){
            if(A[j] <= A[j+1]) cnt++;
            else break;
        }
        for(int k = i+1; k < n; k++){
            if(A[k] <= A[k-1]) cnt++;
            else break;
        }
        ans = max(ans, cnt);
    }
    cout << ans << "\n";
}
