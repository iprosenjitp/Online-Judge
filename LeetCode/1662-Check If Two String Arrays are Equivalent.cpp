#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2)
{
    string W1 = "", W2 = "";
    for(int i = 0; i < word1.size(); i++) W1 += word1[i];
    for(int i = 0; i < word2.size(); i++) W2 += word2[i];
    return (W1 == W2);
}

int main()
{
    vector<string> W1, W2;
    for(int i = 0; i < 2; i++){
        string word;
        cin >> word;
        W1.push_back(word);
    }
    getchar();
    for(int i = 0; i < 2; i++){
        string word;
        cin >> word;
        W2.push_back(word);
    }
    bool ans = arrayStringsAreEqual(W1, W2);
    if(ans) cout << "true\n";
    else cout << "false\n";
}

/*
ab c
a bc
*/
