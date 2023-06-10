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
        string s;
        cin >> s;
        vector<int> A(n);
        ll sum = 0LL;
        for(int i = 0; i < n; i++){
            if(s[i] == 'R') A[i] = n-i-1;
            else A[i] = i;
            sum += A[i];
        }
        vector<ll> B;
        for(int i = 0; i < n/2; i++){
            ll add = n-i-1;
            if(s[i] != 'R') {
                B.push_back(sum - A[i] + add);
                sum = B.back();
            }
            if(s[n-i-1] != 'L') {
                B.push_back(sum - A[n-i-1] + add);
                sum = B.back();
            }
        }
        if(B.size() == 0){
            for(int i = 0; i < n; i++) cout << sum << " ";
            cout << "\n";
            continue;
        }
        int i;
        for(i = 0; i < B.size(); i++) cout << B[i] << " ";
        for(int j = i ; j < n; j++) cout << B.back() << " ";
        cout << "\n";
    }
}
