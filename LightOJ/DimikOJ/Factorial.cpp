#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int n, fact = 1;
        cin >> n;
        for(int i = 2; i <= n; i++){
            fact *= i;
        }
        cout << fact << "\n";
    }
}
