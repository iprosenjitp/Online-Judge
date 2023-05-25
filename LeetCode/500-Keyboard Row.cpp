#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<string> findWords(vector<string>& words)
{
    vector<string> ans;
    string row1 = "qwertyuiop", row2 = "asdfghjkl", row3 = "zxcvbnm";
    for(int i = 0; i < words.size(); i++){
        string w = words[i], str;
        transform(w.begin(), w.end(), w.begin(), ::tolower);
        if(row1.find(w[0]) != -1) str = row1;
        else if(row2.find(w[0]) != -1) str = row2;
        else str = row3;
        bool flag = true;
        for(int j = 0; j < w.size(); j++){
            if(str.find(w[j]) == -1){
                flag = false;
                break;
            }
        }
        if(flag) ans.push_back(words[i]);
    }
    return ans;
}

int main()
{
    vector<string> words(2);
    for(int i = 0; i < words.size(); i++) cin >> words[i];
    vector<string> ans = findWords(words);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}

/**
Hello Alaska Dad Peace
adsdf sfd
*/
