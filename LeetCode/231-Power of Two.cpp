#include <iostream>

using namespace std;

bool isPowerOfTwo(int n)
{
    if(n%2 || n < 0) return false;
    int bits = __builtin_popcount(n);
    if(bits == 1) return true;
    return false;
}

int main()
{
    int num;
    cin >> num;
    bool ans = isPowerOfTwo(num);
    if(ans == true) cout << "true";
    else cout << "false";
    cout << "\n";

    return 0;
}

