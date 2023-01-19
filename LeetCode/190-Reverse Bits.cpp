#include <iostream>

using namespace std;

uint32_t reverseBits(uint32_t n)
{
    uint32_t x = 0;
    for(int i = 0; i < 32; i++){
        if(n & (1 << i)){
            x |= (1 << (31-i));
        }
        else x &= (~(1 << (31-i)));
    }
    return x;
}

int main()
{
    uint32_t num;
    cin >> num;
    uint32_t ans = reverseBits(num);
//    for(int i = 31; i >= 0; i--){
//        if(ans & (1 << i)) cout << "1";
//        else cout << "0";
//    }
//    cout << "\n";
    cout << ans << "\n";

    return 0;
}

