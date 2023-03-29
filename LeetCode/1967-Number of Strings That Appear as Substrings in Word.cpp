#include <bits/stdc++.h>
#define ll long long

using namespace std;

int numOfStrings(vector<string>& patterns, string word)
{
    int cnt = 0;
    for(int i = 0; i < patterns.size(); i++){
        int found = word.find(patterns[i]);
        if(found != -1) cnt++;
    }
    return cnt;
}

int main()
{
    vector<string> patterns;
    string str, word;
    for(int i = 0; i < 4; i++){
        cin >> str;
        patterns.push_back(str);
    }
    cin >> word;
    int ans = numOfStrings(patterns, word);
    cout << ans << "\n";
}

/**
a abc bc d
abc
*/
