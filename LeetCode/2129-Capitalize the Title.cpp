#include <bits/stdc++.h>
#define ll long long

using namespace std;

string capitalizeTitle(string title)
{
    title += ' ';
    int n = title.size();
    string word = "";
    string ans = "";
    for(int i = 0; i < n; i++){
        if(title[i] == ' '){
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            if(word.size() > 2) word[0] = 'A' + (word[0] - 'a');
            word += ' ';
            ans += word;
            word = "";
            continue;
        }
        word += title[i];
    }
    return ans.substr(0, ans.size()-1);
}

int main()
{
    string title;
    getline(cin, title);
    string ans = capitalizeTitle(title);
    cout << ans << "\n";
}
