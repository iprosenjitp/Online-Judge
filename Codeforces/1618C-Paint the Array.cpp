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
        vector<ll> A(n);
        ll gcdEven = 0LL, gcdOdd = 0LL;
        for(int i = 0; i < n; i++) {
            cin >> A[i];
            if(i%2) gcdOdd = __gcd(gcdOdd, A[i]);
            else gcdEven = __gcd(gcdEven, A[i]);
        }
        int flag1 = 0, flag2 = 0;
        for(int i = 0; i < n; i += 2){
            if(A[i]%gcdOdd == 0){
                flag1 = 1;
                break;
            }
        }
        for(int i = 1; i < n; i += 2){
            if(A[i]%gcdEven == 0){
                flag2 = 1;
                break;
            }
        }
        if(flag1 && flag2) cout << "0\n";
        else if(!flag1) cout << gcdOdd << "\n";
        else cout << gcdEven << "\n";
    }
}
