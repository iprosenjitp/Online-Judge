#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<string> uncommonFromSentences(string s1, string s2)
{
    string str = s1 + " " + s2 + " ";
    set<string> uni;
    multiset<string> words;
    vector<string> ans;
    string word = "";
    for(int i = 0; i < str.size(); i++){
        if(str[i] == ' '){
            uni.insert(word);
            words.insert(word);
            word = "";
            continue;
        }
        word += str[i];
    }
    for(auto i : uni)
        if(words.count(i) == 1) ans.push_back(i);
    return ans;
}

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    vector<string> ans = uncommonFromSentences(s1, s2);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}

/**
this apple is sweet
this apple is sour
*/
