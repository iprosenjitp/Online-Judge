#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s, t;
        bool ans = true;
        cin >> s >> t;
        int lenS = s.length();
        int lenT = t.length();
        int lcd = (lenS*lenT) / __gcd(lenS, lenT);
        string s2 = "", t2 = "";
        for(int i = 0; i < lcd/lenS; i++) s2 += s;
        for(int i = 0; i < lcd/lenT; i++) t2 += t;
        if(s2 == t2) cout << s2;
        else cout << "-1";
        cout << "\n";
    }
}
