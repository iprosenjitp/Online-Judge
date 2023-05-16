#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool check(string word, string brokenLetters)
{
    for(int i = 0; i < brokenLetters.size(); i++){
        int x = word.find(brokenLetters[i]);
        if(x != -1) return false;
    }
    return true;
}

int canBeTypedWords(string text, string brokenLetters)
{
    string word = "";
    int cnt = 0;
    for(int i = 0; i < text.size(); i++){
        if(text[i] == ' '){
            if(check(word, brokenLetters)) cnt++;
            word = "";
            continue;
        }
        word += text[i];
    }
    if(check(word, brokenLetters)) cnt++;
    return cnt;
}

int main()
{
    string text, brokenLetters;
    getline(cin, text);
    cin >> brokenLetters;
    int ans = canBeTypedWords(text, brokenLetters);
    cout << ans << "\n";
}


/**
hello world
ad

leet code
e
*/
