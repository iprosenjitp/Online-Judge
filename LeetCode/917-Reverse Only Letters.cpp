#include <bits/stdc++.h>
#define ll long long

using namespace std;

string reverseOnlyLetters(string s)
{
    int n = s.size();
    string temp = "";
    for(int i = 0; i < n; i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) temp += s[i];
    }
    reverse(temp.begin(), temp.end());
    string ans = "";
    int ptr = 0;
    for(int i = 0; i < n; i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            ans += temp[ptr];
            ptr++;
        }
        else ans += s[i];
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    string ans = reverseOnlyLetters(s);
    cout << ans << "\n";
}
