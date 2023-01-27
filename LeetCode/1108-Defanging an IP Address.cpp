#include <bits/stdc++.h>

using namespace std;

string defangIPaddr(string address)
{
    string ans = "";
    for(int i = 0; i < address.length(); i++){
        if(address[i] == '.') {
            ans += "[.]";
            continue;
        }
        ans += address[i];
    }
    return ans;
}

int main()
{
    string S;
    cin >> S;
    string ans = defangIPaddr(S);
    cout << ans << "\n";
}
