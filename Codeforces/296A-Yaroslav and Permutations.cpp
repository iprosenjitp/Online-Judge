#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    multiset<int> S;
    for(int i = 0; i < n; i++){
        int ni;
        cin >> ni;
        S.insert(ni);
    }
    int maxi = 0;
    for(auto x : S)
        if(S.count(x) > maxi) maxi = S.count(x);
    int half = n/2;
    if(n%2) half++;
    if(maxi > half) cout << "NO\n";
    else cout << "YES\n";
}
