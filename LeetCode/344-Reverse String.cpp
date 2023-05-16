#include <bits/stdc++.h>
#define ll long long

using namespace std;

void reverseString(vector<char>& s)
{
    int len = s.size();
    for(int i = 0; i < len/2; i++){
        char temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }
}

int main()
{
    vector<char> s;
    char ch;
    for(int i = 0; i < 5; i++){
        cin >> ch;
        s.push_back(ch);
    }
    reverseString(s);
    for(int i = 0; i < s.size(); i++) cout << s[i] << " ";
    cout << "\n";
}

/**
h e l l o
*/
