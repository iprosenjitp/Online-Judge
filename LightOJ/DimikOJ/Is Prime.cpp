#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isPrime(ll n)
{
    if(n < 2) return false;
    if(n == 2) return true;
    if(n%2 == 0) return false;
    ll limit = sqrt(n)+1L;
    for(ll i = 3L; i <= limit; i += 2L)
        if(n%i == 0) return false;
    return true;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        bool ans = isPrime(n);
        if(ans) cout << n << " is a prime\n";
        else cout << n << " is not a prime\n";
    }
}
