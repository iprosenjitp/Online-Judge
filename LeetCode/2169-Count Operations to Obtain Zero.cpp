#include <bits/stdc++.h>
#define ll long long

using namespace std;

int countOperations(int num1, int num2)
{
    int cnt = 0;
    while(num1 > 0 && num2 > 0){
        cnt++;
        if(num1 <= num2) num2 -= num1;
        else num1 -= num2;
    }
    return cnt;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int ans = countOperations(num1, num2);
    cout << ans << "\n";
}
