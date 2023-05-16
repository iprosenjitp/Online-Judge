#include <bits/stdc++.h>
#define ll long long

using namespace std;

int similarPairs(vector<string>& words)
{
    for(int i = 0; i < words.size(); i++){
        string word = words[i], w = "";
        set<char> S;
        for(int j = 0; j < word.size(); j++)
            S.insert(word[j]);
        for(auto j : S) w += j;
        words[i] = w;
    }
//    for(int i = 0; i < words.size(); i++)
//        cout << words[i] << " ";
//    cout << "\n";
    int cnt = 0;
    for(int i = 0; i < words.size()-1; i++){
        for(int j = i+1; j < words.size(); j++){
            if(words[i] == words[j]) cnt++;
        }
    }
    return cnt;
}

int main()
{
    vector<string> words(3);
    for(int i = 0; i < words.size(); i++) cin >> words[i];
    int ans = similarPairs(words);
    cout << ans << "\n";
}

/**
aba aabb abcd bac aabc
aabb ab ba
nba cba dba
*/
