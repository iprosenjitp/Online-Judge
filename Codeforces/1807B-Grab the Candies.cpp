#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, sumEven = 0, sumOdd = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            if(num%2) sumOdd += num;
            else sumEven += num;
        }
        if(sumEven > sumOdd) cout << "YES\n";
        else cout << "NO\n";
    }
}
