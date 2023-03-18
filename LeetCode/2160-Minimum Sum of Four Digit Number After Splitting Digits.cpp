#include <bits/stdc++.h>
#define ll long long

using namespace std;

int minimumSum(int num)
{
    vector<int> digit;
    while(num){
        int mod = num%10;
        digit.push_back(mod);
        num /= 10;
    }
    sort(digit.begin(), digit.end());
    int sum = (digit[0]*10 + digit[2]) + (digit[1]*10 + digit[3]);
    return sum;
}

int main()
{
    int num;
    cin >> num;
    int ans = minimumSum(num);
    cout << ans << "\n";
}
