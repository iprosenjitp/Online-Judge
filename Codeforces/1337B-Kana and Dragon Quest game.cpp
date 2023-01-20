#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int x, n, m, sum = 0;
        cin >> x >> n >> m;
        while(x > 20 && n--) x = (x/2) + 10;
        x -= 10*m;
        (x > 0)? cout << "NO\n" : cout << "YES\n";
    }

    return 0;
}

