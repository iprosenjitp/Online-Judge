#include <bits/stdc++.h>
#define ll long long

using namespace std;

int digitSum(int num)
{
    int sum = 0;
    while(num){
        sum += num%10;
        num = num/10;
    }
    return sum;
}

int getLucky(string s, int k)
{
    int sum = 0;
    int n = s.size();
    for(int i = 0; i < n; i++){
        int num = (s[i] - 'a') + 1;
        sum += digitSum(num);
    }
    k--;
    while(k--) sum = digitSum(sum);
    return sum;
}

int main()
{
    string s;
    int k;
    cin >> s >> k;
    int ans = getLucky(s, k);
    cout << ans << "\n";
}
