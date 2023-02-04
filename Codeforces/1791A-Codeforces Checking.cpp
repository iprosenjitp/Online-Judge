#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        char ch;
        cin >> ch;
        if(ch == 'c' || ch == 'o' || ch == 'd' || ch == 'e' || ch == 'f' || ch == 'r' || ch == 's')
            cout << "YES\n";
        else cout << "NO\n";
    }
}
