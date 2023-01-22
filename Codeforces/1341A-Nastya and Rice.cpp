#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, a, b, c, d;
        int ans = 0;
        cin >> n >> a >> b >> c >> d;
        cout << (((a-b)*n > c+d || (a+b)*n < c-d) ? "No" : "Yes") << "\n";
    }

    return 0;
}

