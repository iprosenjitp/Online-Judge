#include <iostream>

using namespace std;

int hammingWeight(uint32_t n)
{
    int cnt = 0;
    for(int i = 31; i >= 0; i--){
        if(n & (1 << i)) cnt++;
    }
    return cnt;
}

int main()
{
    uint32_t n;
    cin >> n;
    int ans = hammingWeight(n);
    cout << ans << "\n";

    return 0;
}

