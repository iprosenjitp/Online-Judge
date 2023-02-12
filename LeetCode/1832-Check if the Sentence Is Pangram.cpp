#include <bits/stdc++.h>

using namespace std;

bool checkIfPangram(string sentence)
{
    if(sentence.length() < 26) return false;
    int A[26];
    for(int i = 0; i < 26; i++) A[i] = 0;
    for(int i = 0; i < sentence.length(); i++)
        A[sentence[i] - 'a']++;
    for(int i = 0; i < 26; i++)
        if(!A[i]) return false;
    return true;
}

int main()
{
    string s;
    cin >> s;
    bool ans = checkIfPangram(s);
    if(ans) cout << "true\n";
    else cout << "false\n";
}
