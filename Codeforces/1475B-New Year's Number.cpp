#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n/2020 < n%2020) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}

