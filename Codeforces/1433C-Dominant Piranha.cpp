#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[300005];
        int maxDiff = 0, maxVal = 0, maxIn = 0, ans;
        for(int i = 0; i < n; i++){
            cin >> A[i];
            if(i != 0 && abs(A[i]-A[i-1]) > maxDiff) maxDiff = abs(A[i]-A[i-1]);
            if(A[i] > maxVal) {
                maxVal = A[i];
                maxIn = i;
            }
        }
        if(!maxDiff){
            cout << "-1\n";
            continue;
        }

        if(maxIn != 0 || maxIn == n-1){
            ans = maxIn;
        }
        else{
            for(int i = 1; i < n; i++){
                if(A[i] != maxVal){
                    ans = i-1;
                    break;
                }
            }
        }
        cout << ans+1 << "\n";
    }
}
