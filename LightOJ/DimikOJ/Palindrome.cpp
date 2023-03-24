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
        int len = s.size();
        bool flag = true;
        for(int i = 0, j = len-1; i < len/2; i++, j--){
            if(s[i] != s[j]){
                flag = false;
                break;
            }
        }
        if(flag) cout << "Yes! It is palindrome!\n";
        else cout << "Sorry! It is not palindrome!\n";
    }
}
