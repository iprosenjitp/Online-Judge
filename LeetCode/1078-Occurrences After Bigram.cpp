#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<string> findOcurrences(string text, string first, string second)
{
    text += ' ';
    string word = "";
    vector<string> words;
    for(int i = 0; i < text.size(); i++){
        if(text[i] == ' '){
            words.push_back(word);
            word = "";
            continue;
        }
        word += text[i];
    }
    vector<string> ans;
    for(int i = 0; i < words.size()-2; i++){
        if(words[i] == first && words[i+1] == second)
            ans.push_back(words[i+2]);
    }
    return ans;
}

int main()
{
    string text, first, second;
    getline(cin, text);
    cin >> first >> second;
    vector<string> ans = findOcurrences(text, first, second);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}

/**
alice is a good girl she is a good student
a
good

we will we will rock you
we
will
*/
