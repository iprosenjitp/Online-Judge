#include <bits/stdc++.h>
#define ll long long

using namespace std;

string reversePrefix(string word, char ch)
{
    int found = word.find(ch);
    for(int i = 0; i < (found+1)/2; i++){
        char temp = word[i];
        word[i] = word[found-i];
        word[found-i] = temp;
    }
    return word;
}

int main()
{
    string word;
    char ch;
    cin >> word >> ch;
    string ans = reversePrefix(word, ch);
    cout << ans << "\n";
}

/**
abcdefd d
xyxzxe z
abcd z
*/
