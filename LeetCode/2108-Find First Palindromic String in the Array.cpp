#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isPalindrome(string s)
{
    int len = s.length();
    for(int i = 0; i < len/2; i++)
        if(s[i] != s[len-1-i]) return false;
    return true;
}

string firstPalindrome(vector<string>& words)
{
    for(int i = 0; i < words.size(); i++)
        if(isPalindrome(words[i])) return words[i];
    return "";
}

int main()
{
    vector<string> words;
    string w;
    for(int i = 0; i < 5; i++){
        cin >> w;
        words.push_back(w);
    }
    string ans = firstPalindrome(words);
    cout << ans << "\n";
}

/**
abc car ada racecar cool
*/
