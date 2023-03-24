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
        int ans = s1.find(s2);
        cout << ans << "\n";
    }
}
