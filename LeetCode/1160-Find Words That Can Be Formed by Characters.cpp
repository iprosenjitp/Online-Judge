#include <bits/stdc++.h>
#define ll long long

using namespace std;

int countCharacters(vector<string>& words, string chars)
{
    string str = "";
    for(int i = 0; i < words.size(); i++){
        string word = words[i];
        string temp = chars;
        int flag = 1;
        for(int j = 0; j < word.size(); j++){
            int found = temp.find(word[j]);
            if(found != -1){
                temp[found] = '0';
            }
            else{
                flag = 0;
                break;
            }
        }
        if(flag) str += word;
    }
    return str.size();
}

int main()
{
    vector<string> words(3);
    for(int i = 0; i < words.size(); i++) cin >> words[i];
    string chars;
    cin >> chars;
    int ans = countCharacters(words, chars);
    cout << ans << "\n";
}


/**
cat bt hat tree
atach

hello world leetcode
welldonehoneyr
*/
