#include <bits/stdc++.h>
#define ll long long

using namespace std;

int countBinarySubstrings(string s)
{
    int prev = 0, curr = 1;
    int sum = 0;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]) curr++;
        else{
            sum += min(prev, curr);
            prev = curr;
            curr = 1;
        }
    }
    sum += min(prev, curr);
    return sum;
}

int main()
{
    string s;
    cin >> s;
    int ans = countBinarySubstrings(s);
    cout << ans << "\n";
}
