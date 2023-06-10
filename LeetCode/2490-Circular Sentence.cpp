#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isCircularSentence(string sentence)
{
    sentence += ' ';
    string word = "";
    vector<string> words;
    for(int i = 0; i < sentence.size(); i++){
        if(sentence[i] == ' '){
            words.push_back(word);
            word = "";
            continue;
        }
        word += sentence[i];
    }
    words.push_back(words[0]);
    for(int i = 0; i < words.size()-1; i++){
        string prev = words[i];
        string next = words[i+1];
        if(prev[prev.size()-1] != next[0]) return false;
    }
    return true;
}

int main()
{
    string sentence;
    getline(cin, sentence);
    if(isCircularSentence(sentence)) cout << "true\n";
    else cout << "false\n";
}
