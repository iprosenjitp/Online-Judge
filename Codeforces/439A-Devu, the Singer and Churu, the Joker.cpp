#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d, ni, sum = 0;
    cin >> n >> d;
    for(int i = 0; i < n; i++){
        cin >> ni;
        sum += ni;
    }
    if(sum + (10*(n-1)) > d) cout << "-1\n";
    else cout << (d-sum)/5 << "\n";
}
