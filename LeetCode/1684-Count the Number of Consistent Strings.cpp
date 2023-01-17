#include <iostream>
#include <vector>

using namespace std;

int countConsistentStrings(string allowed, vector<string>& words)
{
    int ans = 0;
    int str = 0;
    for(int i = 0; i < allowed.length(); i++){
        int k = allowed[i] - 'a';
        str = str | (1 << k);
    }

    for(int i = 0; i < words.size(); i++){
        int cnt = 0;
        string word = words[i];
        int len = word.length();
        for(int j = 0; j < word.length(); j++){
            int m = word[j] - 'a';
            if(str & (1 << m)) cnt++;
            else break;
        }
        if(cnt == len) ans++;
    }
    return ans;
}

int main()
{
    string allowed;
    cin >> allowed;
    vector<string> words;
    for(int i = 0; i < 7; i++){
        string word;
        cin >> word;
        words.push_back(word);
    }
    int ans = countConsistentStrings(allowed, words);
    cout << ans << "\n";

    return 0;
}

