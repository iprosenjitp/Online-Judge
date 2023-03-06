#include <bits/stdc++.h>
#define ll long long

using namespace std;

int compress(vector<char>& chars)
{
    string s = "";
    char cur = chars[0];
    int cnt = 0;
    for(int i = 0; i < chars.size(); i++){
        if(cur == chars[i]) cnt++;
        else{
            s += chars[i-1];
            if(cnt > 1) s += to_string(cnt);
            cur = chars[i];
            cnt = 1;
        }
    }
    s += chars[chars.size()-1];
    if(cnt > 1) s += to_string(cnt);
    for(int i = 0; i < s.length(); i++) chars[i] = s[i];
    return s.length();
}

int main()
{
    vector<char> chars;
    for(int i = 0; i < 7; i++){
        char ch;
        cin >> ch;
        chars.push_back(ch);
    }
    int ans = compress(chars);
    cout << ans << "\n";
}

/**
a a b b c c c

a

a b b b b b b b b b b b b

a a a b b a a
*/
