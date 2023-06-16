#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> A(n);
        for(int i = 0; i < n; i++) cin >> A[i];
        int x = 0;
        for(int i = n-1; i > 0; i--){
            if(A[i-1] > A[i]){
                x = i;
                break;
            }
        }
        if(!x){
            cout << "0\n";
            continue;
        }
        unordered_set<int> S;
        for(int i = 0; i < x; i++) S.insert(A[i]);
        int y = 0;
        for(int i = n-1; i >= x; i--){
            if(S.count(A[i])){
                y = i;
                break;
            }
        }
        for(int i = x; i < y; i++) S.insert(A[i]);
        cout << S.size() << "\n";
    }
}

/**
1
9
2 4 2 8 7 3 2 3 5
*/
