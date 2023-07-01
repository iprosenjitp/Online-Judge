#include <bits/stdc++.h>
#define ll long long

using namespace std;

int maxNumberOfBalloons(string text)
{
    vector<int> A(26);
    for(int i = 0; i < text.size(); i++) A[text[i]-'a']++;
    A['l'-'a'] = A['l'-'a'] / 2;
    A['o'-'a'] = A['o'-'a'] / 2;
    int ans = INT_MAX;
    string s = "balon";
    for(int i = 0; i < 5; i++) ans = min(ans, A[s[i]-'a']);
    return ans;
}

int main()
{
    string text;
    cin >> text;
    int ans = maxNumberOfBalloons(text);
    cout << ans << "\n";
}
