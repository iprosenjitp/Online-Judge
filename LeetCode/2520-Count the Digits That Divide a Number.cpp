#include <bits/stdc++.h>
#define ll long long

using namespace std;

int countDigits(int num)
{
    int cnt = 0;
    int a = num;
    while(num){
        int x = num%10;
        if(a%x == 0) cnt++;
        num /= 10;
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    int ans = countDigits(n);
    cout << ans << "\n";
}
