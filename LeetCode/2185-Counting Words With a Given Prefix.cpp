#include <bits/stdc++.h>
#define ll long long

using namespace std;

int prefixCount(vector<string>& words, string pref)
{
    int cnt = 0;
    for(int i = 0; i < words.size(); i++)
        if(words[i].find(pref) == 0) cnt++;
    return cnt;
}

int main()
{
    vector<string> words;
    string pref, w;
    for(int i = 0; i < 4; i++){
        cin >> w;
        words.push_back(w);
    }
    cin >> pref;
    int ans = prefixCount(words, pref);
    cout << ans << "\n";
}

/**
pay attention practice attend
at
*/
