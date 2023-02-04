#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, len;
        string s;

        cin >> n;
        len = n;
        cin >> s;
        for(int i = 0, j = n-1; i < n/2; i++, j--){
            if(s[i] != s[j]) len -= 2;
            else break;
        }
        cout << len << "\n";
    }
}
