#include <bits/stdc++.h>

using namespace std;

bool isAlienSorted(vector<string>& words, string order)
{
    int A[26];
    for(int i = 0; i < 26; i++) A[i] = 0;
    for(int i = 0; i < order.length(); i++){
        A[order[i] - 'a'] = i;
    }
    for(int i = 0; i < order.length(); i++) cout << A[i] << " ";
    cout << "\n";
    for(int i = 0; i < words.size()-1; i++){
        bool flag = false;
        string w1 = words[i];
        string w2 = words[i+1];
        int len = min(w1.length(), w2.length());
        for(int j = 0; j < len; j++){
            cout << A[w1[j] - 'a'] << " " << A[w2[j] - 'a'] << "\n";
            if(A[w1[j] - 'a'] > A[w2[j] - 'a']){
                return flag;
            }
            else if(A[w1[j] - 'a'] < A[w2[j] - 'a']){
                flag = true;
                break;
            }
        }
        if(!flag && w1.length() > w2.length()) return false;
    }
    return true;
}

int main()
{
    vector<string> words;
    string order;
    for(int i = 0; i < 2; i++){
        string word;
        cin >> word;
        words.push_back(word);
    }
    cin >> order;
    bool ans = isAlienSorted(words, order);
    if(ans) cout << "true" << "\n";
    else cout << "false" << "\n";
}

/**
apple app
abcdefghijklmnopqrstuvwxyz
*/
