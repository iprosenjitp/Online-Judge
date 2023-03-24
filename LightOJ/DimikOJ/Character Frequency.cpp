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
        char ch;
        int cnt = 0;
        getline(cin, s);
        cin >> ch;
        getchar();
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ch) cnt++;
        }
        cout << "Occurrence of '" << ch << "' in '" << s << "' = " << cnt << "\n";
    }
}
