#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s, us = "";
        cin >> s;
        for(int i = 0; i < s.size(); i++) us += tolower(s[i]);
        if(us == "yes") cout << "YES\n";
        else cout << "NO\n";
    }
}
