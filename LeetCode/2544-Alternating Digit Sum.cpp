#include <bits/stdc++.h>
#define ll long long

using namespace std;

int alternateDigitSum(int n)
{
    vector<int> digit;
    while(n){
        digit.push_back(n%10);
        n /= 10;
    }
    reverse(digit.begin(), digit.end());
    int sum = 0;
    for(int i = 0; i < digit.size(); i++){
        if(i%2) sum -= digit[i];
        else sum += digit[i];
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int ans = alternateDigitSum(n);
    cout << ans << "\n";
}
