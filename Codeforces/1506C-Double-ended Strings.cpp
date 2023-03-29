#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<string> subString(string s)
{
    vector<string> V;
    int n = s.length();
    for (int len = 1; len <= n; len++){
        for (int i = 0; i <= n - len; i++){
            int j = i + len - 1;
            string str = "";
            for (int k = i; k <= j; k++) str += s[k];
            V.push_back(str);
        }
    }
    return V;
}

int main()
{
    int t;
    cin >> t;
    getchar();
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        int lenS1 = s1.length();
        int lenS2 = s2.length();
        if(lenS1 > lenS2) swap(s1, s2);
        vector<string> subStr = subString(s1);
        string str;
        int found;
        for(int i = subStr.size()-1; i >= 0; i--){
            str = subStr[i];
            found = s2.find(str);
            if(found != -1) break;
        }
        int ans;
        int lenStr = str.length();
        if(found == -1) ans = lenS1 + lenS2;
        else ans = (lenS1 - lenStr)+(lenS2 - lenStr);
        cout << ans <<"\n";
    }
}
