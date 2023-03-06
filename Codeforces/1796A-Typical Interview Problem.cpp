#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    string fb = "FBFFBFFBFBFFBFFBFB";
    int t;
    cin >> t;
    while(t--){
        int k, flag = 0;
        cin >> k;
        string s;
        cin >> s;
        int found = fb.find(s);
//        cout << found << "\n";
//        for(int i = 0; i < 16-k; i++){
//            string temp = fb.substr(i, k);
//            if(temp == s) flag = 1;
//        }
        if(found != -1) cout << "YES\n";
        else cout << "NO\n";
    }
}
