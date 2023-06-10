#include <bits/stdc++.h>
#define ll long long

using namespace std;

int countVowelSubstrings(string word)
{
    string vowel = "aeiou";
    int n = word.size();
    int cnt = 0;
    for(int i = 0; i < n; i++){
        set<char> ch;
        for(int j = i; j < n; j++){
            if(vowel.find(word[j]) != -1) ch.insert(word[j]);
            else break;
            if(ch.size() == 5) cnt++;
        }
    }
    return cnt;
}

int main()
{
    string word;
    cin >> word;
    int ans = countVowelSubstrings(word);
    cout << ans << "\n";
}
