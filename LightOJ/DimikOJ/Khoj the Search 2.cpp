#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    getchar();
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        int len1 = s1.size(), len2 = s2.size(), cnt = 0;
        for(int i = 0; i <= len1-len2; i++){
            if(s1.substr(i, len2) == s2) cnt++;
        }
        cout << cnt << "\n";
    }
}
