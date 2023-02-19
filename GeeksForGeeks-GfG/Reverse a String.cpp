#include <bits/stdc++.h>
#define ll long long

using namespace std;

string reverseWord(string str)
{
    for(int i = 0, j = str.length()-1; i < str.length()/2; i++, j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return str;
}


int main()
{
    string str;
    cin >> str;
    string ans = reverseWord(str);
    cout << ans << "\n";
}
