#include <bits/stdc++.h>
#define ll long long

using namespace std;

int subtractProductAndSum(int n)
{
    vector<int> digits;
    while(n) {
        digits.push_back(n%10);
        n /= 10;
    }
    int pro = 1, sum = 0;
    for(int i = 0; i < digits.size(); i++) {
        pro *= digits[i];
        sum += digits[i];
    }
    return (pro-sum);
}

int main()
{
    int n;
    cin >> n;
    int ans = subtractProductAndSum(n);
    cout << ans << "\n";
}
