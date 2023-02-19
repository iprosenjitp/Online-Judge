#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if(n < m) {
        cout << "-1\n";
        return 0;
    }
    int a = n/2;
    if(n%2) a++;
    for(int i = a; i <= n; i++){
        if(i%m == 0){
            cout << i << "\n";
            break;
        }
    }
}
