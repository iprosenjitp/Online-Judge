#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    string str, h = "hello";
    cin >> str;
    bool flag = false;
    for(int i = 0, j = 0; i < str.length() && j < 5; i++){
        if(str[i] == h[j]) j++;
        if(j == 5) flag = true;
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
}
