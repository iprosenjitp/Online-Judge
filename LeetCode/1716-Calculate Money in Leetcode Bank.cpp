#include <bits/stdc++.h>
#define ll long long

using namespace std;

int totalMoney(int n)
{
    int x = n/7;
    int y = n%7;
    int sum = 0;
    int i = 1;
    for(i = 1; i <= x; i++)
        for(int j = i; j < 7+i; j++)
            sum += j;
    for(int j = 0; j < y; j++) sum += i++;
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int ans = totalMoney(n);
    cout << ans << "\n";
}
