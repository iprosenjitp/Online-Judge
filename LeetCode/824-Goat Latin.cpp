#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isVowel(char ch)
{
    if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' ||  ch=='o' || ch=='U' || ch=='u')
        return 1;
    return 0;
}

string toGoatLatin(string sentence)
{
    sentence += ' ';
    string ans = "";
    string word = "";
    int n = 1;
    for(int i = 0; i < sentence.size(); i++){
        if(sentence[i] != ' ')
            word += sentence[i];
        else{
            char ch = word[0];
            if(word.size() > 1 && isVowel(ch) == false){
                word = word.substr(1, word.size());
                word += ch;
            }
            word += "ma";
            for(int j = 0; j < n; j++) word += 'a';
            ans += word;
            ans += ' ';
            word = "";
            n++;
        }
    }
    return ans.substr(0, ans.size()-1);
}

int main()
{
    string sentence;
    getline(cin, sentence);
    string ans = toGoatLatin(sentence);
    cout << ans << "\n";
}
