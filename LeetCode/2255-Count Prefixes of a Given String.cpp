#include <bits/stdc++.h>
#define ll long long

using namespace std;

int countPrefixes(vector<string>& words, string s)
{
    int cnt = 0;
    for(int i = 0; i < words.size(); i++){
        int x = s.find(words[i]);
        if(!x) cnt++;
    }
    return cnt;
}

int main()
{
    string w, s;
    vector<string> words(6);
    for(int i = 0; i < words.size(); i++) cin >> words[i];
    cin >> s;
    int ans = countPrefixes(words, s);
    cout << ans << "\n";
}

/**
a b c ab bc abc
abc
*/
