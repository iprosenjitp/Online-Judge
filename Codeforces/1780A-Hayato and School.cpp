#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        vector<int> even, odd;

        int n;
        int A[302];
        int flag = 0, i, j, k;
        cin >> n;
        for(i = 0; i < n; i++) {
            cin >> A[i];
            if(A[i]%2) odd.push_back(i);
            else even.push_back(i);
        }

        if(odd.size() == 0) cout << "NO\n";
        else if(odd.size() == 1 || odd.size() == 2){
            if(even.size() < 2) cout << "NO\n";
            else {
                cout << "YES\n";
                cout << odd[0]+1 << " " << even[0]+1 << " " << even[1]+1 << "\n";
            }
        }
        else{
            cout << "YES\n";
            cout << odd[0]+1 << " " << odd[1]+1 << " " << odd[2]+1 << "\n";
        }
    }
}
