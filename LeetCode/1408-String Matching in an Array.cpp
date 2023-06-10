#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<string> stringMatching(vector<string>& words)
{
    vector<string> ans;
    for(int i = 0; i < words.size(); i++){
        string w = words[i];
        for(int j = 0; j < words.size(); j++){
            if(i == j) continue;
            if(words[j].find(w) != -1) {
                ans.push_back(w);
                break;
            }
        }
    }
    return ans;
}

int main()
{
    vector<string> words(4);
    for(int i = 0; i < words.size(); i++) cin >> words[i];
    vector<string> ans = stringMatching(words);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}

/**
mass as hero superhero
*/
