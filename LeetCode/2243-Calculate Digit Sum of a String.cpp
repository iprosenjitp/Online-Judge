#include <bits/stdc++.h>
#define ll long long

using namespace std;

string digitSum(string s, int k)
{
    string ans = "";
    while(1){
        if(s.size() <= k) return s;
        int sum = 0;
        for(int i = 0; i < s.size(); i++){
            if(i && !(i%k)){
                ans += to_string(sum);
                sum = 0;
            }
            sum += s[i]-'0';
        }
        ans += to_string(sum);
        s = ans;
        ans = "";
    }
}

int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    string ans = digitSum(s, k);
    cout << ans << "\n";
}
