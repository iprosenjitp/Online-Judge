#include <iostream>

using namespace std;

int bitwiseComplement(int n)
{
    if(n == 0) return 1;
    int flag;
    for(int i = 31; i >= 0; i--){
        if(n & (1 << i)){
            flag = i;
            break;
        }
    }
    for(int i = flag; i >= 0; i--) n ^= (1 << i);
    return n;
}

int main()
{
    int num;
    cin >> num;
    int ans = bitwiseComplement(num);
    cout << ans << "\n";

    return 0;
}

