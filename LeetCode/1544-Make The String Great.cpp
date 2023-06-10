#include <bits/stdc++.h>
#define ll long long

using namespace std;

string makeGood(string s)
{
    int n = s.size();
    for(int i = 1; i < n; i++){
        if(abs(s[i]-s[i-1]) == 32){
//            cout << i << " ";
            s = s.substr(0, i-1) + s.substr(i+1, n-i-1);
            n -= 2;
            i = 0;
//            cout << s << " " << i << "\n";
        }
    }
    return s;
}

int main()
{
    string s;
    cin >> s;
    string ans = makeGood(s);
    cout << ans << "\n";
}
