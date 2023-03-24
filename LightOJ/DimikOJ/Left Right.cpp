#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    getchar();
    while(t--){
        string s;
        getline(cin, s);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'R') s[i] = s[i+1];
            else if(s[i] == 'L') s[i] = s[i-1];
        }
        cout << s << "\n";
    }
}
