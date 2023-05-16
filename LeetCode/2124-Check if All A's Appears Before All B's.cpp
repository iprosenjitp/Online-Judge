#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool checkString(string s)
{
    int b = s.find('b');
    reverse(s.begin(), s.end());
    int a = s.find('a');
    a = s.size()-1-a;
    cout << a << " " << b << "\n";
    if(a == s.size() || b == -1) return true;
    if(a > b) return false;
    return true;
}

int main()
{
    string s;
    cin >> s;
    bool ans = checkString(s);
    if(ans) cout << "true\n";
    else cout << "false\n";
}
