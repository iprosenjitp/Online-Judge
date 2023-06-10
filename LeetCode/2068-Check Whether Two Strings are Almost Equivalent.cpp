#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool checkAlmostEquivalent(string word1, string word2)
{
    vector<int> A(26), B(26);
    for(int i = 0; i < word1.size(); i++) A[word1[i] - 'a']++;
    for(int i = 0; i < word2.size(); i++) B[word2[i] - 'a']++;
    for(int i = 0; i < 26; i++)
        if(abs(A[i]-B[i]) > 3) return false;
    return true;
}

int main()
{
    string word1, word2;
    cin >> word1 >> word2;
    if(checkAlmostEquivalent(word1, word2)) cout << "true\n";
    else cout << "false\n";
}

/**
aaaa bccb

abcdeef abaaacc

babababab cccddabba
*/
