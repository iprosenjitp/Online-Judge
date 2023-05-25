#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<string> commonChars(vector<string>& words)
{
    vector<string> ans;
    string str = words[0];
    string w = "";
    for(int i = 0; i < str.size(); i++){
        char ch = str[i];
        int flag = 1;
        for(int j = 0; j < words.size(); j++){
            int found = words[j].find(ch);
            if(found == -1){
                flag = 0;
                break;
            }
            else words[j][found] = '0';
        }
        if(flag) {
            w += ch;
            ans.push_back(w);
        }
        w = "";
    }
    return ans;
}

int main()
{
    vector<string> words(3);
    for(int i = 0; i < words.size(); i++) cin >> words[i];
    vector<string> ans = commonChars(words);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}

/**
bella label roller
cool lock cook
*/
