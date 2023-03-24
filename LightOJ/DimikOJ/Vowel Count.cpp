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
        int cnt = 0;
        getline(cin, s);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                cnt++;
        }
        cout << "Number of vowels = " << cnt << "\n";
    }
}
