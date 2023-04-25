#include <bits/stdc++.h>
#define ll long long

using namespace std;

string generateTheString(int n)
{
    string ans = "";
    for(int i = 0; i < n-1; i++) ans += 'a';
    if(n%2) ans += 'a';
    else ans += 'b';
    return ans;
}

int main()
{
    int n;
    cin >> n;
    string ans = generateTheString(n);
    cout << ans << "\n";
}
