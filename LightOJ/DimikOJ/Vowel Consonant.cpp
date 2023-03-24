#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    getchar();
    while(t--){
        string vow = "", con = "";
        string s;
        getline(cin, s);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' ') continue;
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                vow += s[i];
            else con += s[i];
        }
        cout << vow << "\n" << con << "\n";
    }
}
