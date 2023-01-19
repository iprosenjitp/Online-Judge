#include <iostream>

using namespace std;

bool isPowerOfFour(int n)
{
    if(n <= 0) return false;
    return (n & (n-1)) == 0 && (n%3 == 1);
}

int main()
{
    int num;
    cin >> num;
    bool ans = isPowerOfFour(num);
    if(ans) cout << "true";
    else cout << "false";
    cout << "\n";

    return 0;
}

