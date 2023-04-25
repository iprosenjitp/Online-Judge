#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int k, r, i;
    cin >> k >> r;
    for(i = 1; ; i++){
        int x = i*k;
        int mod = x%10;
        if(mod == 0 || mod == r) break;
    }
    cout << i << "\n";
}
