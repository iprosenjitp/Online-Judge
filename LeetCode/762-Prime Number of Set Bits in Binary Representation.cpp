#include <iostream>
#include <math.h>

using namespace std;

int checkPrime(int num)
{
    if(num < 2) return 0;
    if(num == 2) return 1;
    if(num > 2 && num%2 == 0) return 0;
    for(int i = 3; i <= sqrt(num); i++){
        if(num%i == 0)return 0;
    }
    return 1;
}

int countPrimeSetBits(int left, int right)
{
    int cnt = 0;
    for(int i = left; i <= right; i++){
        int bits = __builtin_popcount(i);
        if(checkPrime(bits)) cnt++;
    }
    return cnt;
}

int main()
{
    int left, right;
    cin >> left >> right;
    int ans = countPrimeSetBits(left, right);
    cout << ans << "\n";

    return 0;
}

