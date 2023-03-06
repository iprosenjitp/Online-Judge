#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s, meow = "meow" ;
        cin >> s;
        for(int i = 0; i < s.length(); i++) s[i] = tolower(s[i]);
        string str = "";
        str += s[0];
        char cur = s[0];
        for(int i = 1; i < s.length(); i++){
            if(s[i] != cur){
                str += s[i];
                cur = s[i];
            }
        }
        if(str == meow) cout << "YES\n";
        else cout << "NO\n";
    }
}
