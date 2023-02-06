#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    getchar();
    while(t--){
        int cnt = 0;
        string s;
        getline(cin, s);
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' ' && s[i-1] != ' ') cnt++;
        }
        cout << cnt+1 << "\n";
    }
}
