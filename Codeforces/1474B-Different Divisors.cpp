#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isPrime(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
        if(n%i == 0) return false;
    return true;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll d;
        cin >> d;
        ll first = 1+d;
        while(!isPrime(first)) first++;
        ll second = first+d;
        while(!isPrime(second)) second++;
        ll ans = first*second;
        cout << ans << "\n";
    }
}
