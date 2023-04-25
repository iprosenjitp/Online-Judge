#include <bits/stdc++.h>
#define ll long long

using namespace std;

int countTriples(int n)
{
    int cnt = 0;
    vector<int> V(n+1);
    for(int i = 1; i <= n; i++) V[i] = i*i;
    for(int i = 1; i <= n; i++){
        for(int j = i+1; j <= n; j++){
            int x = V[i]+V[j];
            bool found = binary_search(V.begin(), V.end(), x);
            if(found) cnt += 2;
        }
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    int ans = countTriples(n);
    cout << ans << "\n";
}
