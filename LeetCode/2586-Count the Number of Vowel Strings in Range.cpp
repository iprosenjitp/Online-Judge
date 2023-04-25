#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isVowel(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
    return false;
}

int vowelStrings(vector<string>& words, int left, int right)
{
    int cnt = 0;
    for(int i = left; i <= right; i++){
        string word = words[i];
        if(isVowel(word[0]) && isVowel(word[word.size()-1])) cnt++;
    }
    return cnt;
}

int main()
{
    vector<string> words;
    string w;
    for(int i = 0; i < 3; i++){
        cin >> w;
        words.push_back(w);
    }
    int left, right;
    cin >> left >> right;
    int ans = vowelStrings(words, left, right);
    cout << ans << "\n";
}

/**
are amy u
0 2
*/
