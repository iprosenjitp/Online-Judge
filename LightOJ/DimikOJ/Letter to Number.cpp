#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            cout << (s[i]-'A')+1;
        }
        cout << "\n";
    }
}
