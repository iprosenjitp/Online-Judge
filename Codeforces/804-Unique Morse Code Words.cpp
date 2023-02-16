#include <bits/stdc++.h>
#define ll long long

using namespace std;

int uniqueMorseRepresentations(vector<string>& words)
{
    map<string, string> M;
    string A[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    for(int i = 0; i < words.size(); i++){
        string word = "";
        for(int j = 0; j < words[i].length(); j++) word += A[(words[i][j] - 'a')];
        M[word] = words[i];
    }
    int cnt = 0;
    for(auto x : M) cnt++;
    return cnt;
}

int main()
{
    vector<string> W;
    for(int i = 0; i < 4; i++){
        string word;
        cin >> word;
        W.push_back(word);
    }
    int ans = uniqueMorseRepresentations(W);
    cout << ans << "\n";
}

/*
gin zen gig msg
*/
