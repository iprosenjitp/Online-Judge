#include <bits/stdc++.h>
#define ll long long

using namespace std;

string reverseString(string s)
{
    int n = s.length();
    for (int i = 0; i < n/2; i++)
        swap(s[i], s[n-i-1]);
    return s;
}

string reverseWords(string s)
{
    s += " ";
    vector<string> str;
    string ans = "";
    string w = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            str.push_back(w);
            w = "";
        }
        else w += s[i];
    }
    for(int i = 0; i < str.size(); i++){
        ans += reverseString(str[i]);
        if(i < str.size()-1) ans += " ";
    }
    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseWords(s);
    cout << ans << "\n";
}
