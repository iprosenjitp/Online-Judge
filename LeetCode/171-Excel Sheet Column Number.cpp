#include <bits/stdc++.h>
#define ll long long

using namespace std;

int titleToNumber(string columnTitle)
{
    reverse(columnTitle.begin(), columnTitle.end());
    int ans = 0;
    for(int i = 0; i < columnTitle.size(); i++)
        ans += pow(26, i) * ((columnTitle[i]-'A')+1);
    return ans;
}

int main()
{
    string columnTitle;
    cin >> columnTitle;
    int ans = titleToNumber(columnTitle);
    cout << ans << "\n";
}
