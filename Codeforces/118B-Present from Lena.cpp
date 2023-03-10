#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n+1; i++){
        for(int j = 2*n; j > 2*i; j--) cout << " ";
        int x = 0;
        for(int j = 0; j <= i; j++, x++) cout << (j != 0 ? " " : "") << x;
        x -= 2;
        for(int j = 0; j < i; j++, x--) cout << " " << x;
        cout << "\n";
    }
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < 2*i; j++) cout << " ";
        int x = 0;
        for(int j = 0; j <= n-i; j++, x++) cout << (j != 0 ? " " : "") << x;
        x -= 2;
        for(int j = 0; j < n-i; j++, x--) cout << " " << x;
        cout << "\n";
    }
}
