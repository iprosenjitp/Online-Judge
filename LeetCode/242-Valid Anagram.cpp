#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isAnagram(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return (s == t);
}

int main()
{
    string s, t;
    cin >> s >> t;
    if(isAnagram(s, t)) cout << "true\n";
    else cout << "false\n";
}

/**
anagram nagaram
rat car
*/
