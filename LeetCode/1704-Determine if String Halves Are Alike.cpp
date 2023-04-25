#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isVowel(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
    return false;
}

bool halvesAreAlike(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int len = s.size();
    int cntA = 0, cntB = 0;
    for(int i = 0; i < len/2; i++)
        if(isVowel(s[i])) cntA++;
    for(int i = len/2; i < len; i++)
        if(isVowel(s[i])) cntB++;
    if(cntA == cntB) return true;
    return false;
}

int main()
{
    string s;
    cin >> s;
    if(halvesAreAlike(s)) cout << "true\n";
    else cout << "false\n";
}
