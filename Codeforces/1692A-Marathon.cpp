#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        vector<int> A(4);
        int cnt = 0;
        for(int i = 0; i < 4; i++) cin >> A[i];
        for(int i = 1; i < 4; i++){
            if(A[0] < A[i]) cnt++;
        }
        cout << cnt << "\n";
    }
}
